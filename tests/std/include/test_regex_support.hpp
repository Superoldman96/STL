// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#pragma once
#include <cstddef>
#include <cstdio>
#include <initializer_list>
#include <regex>
#include <string>
#include <utility>

class regex_fixture {
    int regex_test_result = 0;

public:
    int result() const {
        return regex_test_result;
    }

    void fail_regex() {
        regex_test_result = 1;
    }

    void verify(const bool b) {
        if (!b) {
            fail_regex();
        }
    }

    void verify_match_regex(const std::string& subject, const std::string& pattern, const std::regex& r,
        const std::regex_constants::syntax_option_type syntax, const bool correct) {
        try {
            if (std::regex_match(subject, r) != correct) {
                printf(R"(Expected regex_match("%s", regex("%s", 0x%X)) to be %s.)"
                       "\n",
                    subject.c_str(), pattern.c_str(), static_cast<unsigned int>(syntax), correct ? "true" : "false");
                fail_regex();
            }
        } catch (const std::regex_error& e) {
            printf(R"(Failed to regex_match("%s", regex("%s", 0x%X)): regex_error: "%s")"
                   "\n",
                subject.c_str(), pattern.c_str(), static_cast<unsigned int>(syntax), e.what());
            fail_regex();
        }
    }

    void verify_match_impl(const std::string& subject, const std::string& pattern,
        const std::regex_constants::syntax_option_type syntax, const bool correct) {
        try {
            const std::regex r(pattern, syntax);
            verify_match_regex(subject, pattern, r, syntax, correct);
        } catch (const std::regex_error& e) {
            printf(R"(Failed to construct regex("%s", 0x%X): "%s")"
                   "\n",
                pattern.c_str(), static_cast<unsigned int>(syntax), e.what());
            fail_regex();
        }
    }

    void should_match(const std::string& subject, const std::string& pattern,
        const std::regex_constants::syntax_option_type syntax = std::regex_constants::ECMAScript) {
        verify_match_impl(subject, pattern, syntax, true);
    }

    void should_match(const std::string& subject, const std::string& pattern, const std::regex& regex,
        const std::regex_constants::syntax_option_type syntax = std::regex_constants::ECMAScript) {
        verify_match_regex(subject, pattern, regex, syntax, true);
    }

    void should_not_match(const std::string& subject, const std::string& pattern,
        const std::regex_constants::syntax_option_type syntax = std::regex_constants::ECMAScript) {
        verify_match_impl(subject, pattern, syntax, false);
    }

    void should_not_match(const std::string& subject, const std::string& pattern, const std::regex& regex,
        const std::regex_constants::syntax_option_type syntax = std::regex_constants::ECMAScript) {
        verify_match_regex(subject, pattern, regex, syntax, false);
    }

    void should_capture(const std::string& subject, const std::string& pattern, const std::string& group) {
        try {
            const std::regex r(pattern);
            std::smatch m;

            if (!std::regex_match(subject, m, r)) {
                printf(R"(Expected regex("%s") to match "%s".)"
                       "\n",
                    pattern.c_str(), subject.c_str());
                fail_regex();
                return;
            }

            if (m.size() != 2) {
                printf(R"(should_capture("%s", "%s", "%s"): bad group count (%zu))"
                       "\n",
                    subject.c_str(), pattern.c_str(), group.c_str(), m.size());
                fail_regex();
                return;
            }

            if (m[0] != subject) {
                printf(R"(should_capture("%s", "%s", "%s"): m[0] == "%s")"
                       "\n",
                    subject.c_str(), pattern.c_str(), group.c_str(), m[0].str().c_str());
                fail_regex();
            }

            if (m[1] != group) {
                printf(R"(should_capture("%s", "%s", "%s"): m[1] == "%s")"
                       "\n",
                    subject.c_str(), pattern.c_str(), group.c_str(), m[1].str().c_str());
                fail_regex();
            }
        } catch (const std::regex_error& e) {
            printf(R"(should_capture("%s", "%s", "%s"): regex_error: "%s")"
                   "\n",
                subject.c_str(), pattern.c_str(), group.c_str(), e.what());
            fail_regex();
        }
    }

    void should_replace_to(const std::string& subject, const std::string& pattern, const std::string& fmt,
        const std::regex_constants::match_flag_type match_flags, const std::string& expected) {
        try {
            const std::regex r(pattern);

            const std::string result = std::regex_replace(subject, r, fmt, match_flags);
            if (result != expected) {
                printf("should_replace_to(\n"
                       R"(subject:     "%s")"
                       "\n"
                       R"(pattern:     "%s")"
                       "\n"
                       R"(fmt:         "%s")"
                       "\n"
                       R"(match_flags: 0x%X)"
                       "\n"
                       R"(expected:    "%s")"
                       "\n"
                       R"(): bad answer, returned: "%s")"
                       "\n",
                    subject.c_str(), pattern.c_str(), fmt.c_str(), static_cast<unsigned int>(match_flags),
                    expected.c_str(), result.c_str());
                fail_regex();
            }
        } catch (const std::regex_error& e) {
            printf("should_replace_to(\n"
                   R"(subject:     "%s")"
                   "\n"
                   R"(pattern:     "%s")"
                   "\n"
                   R"(fmt:         "%s")"
                   "\n"
                   R"(match_flags: 0x%X)"
                   "\n"
                   R"(expected:    "%s")"
                   "\n"
                   R"(): regex_error: "%s")"
                   "\n",
                subject.c_str(), pattern.c_str(), fmt.c_str(), static_cast<unsigned int>(match_flags), expected.c_str(),
                e.what());
            fail_regex();
        }
    }

    void should_throw(const std::string& pattern, const std::regex_constants::error_type expectedCode,
        const std::regex_constants::syntax_option_type syntax = std::regex_constants::ECMAScript) {
        try {
            const std::regex r(pattern, syntax);
            printf(R"(regex r("%s", 0x%X) succeeded (which is bad).)"
                   "\n",
                pattern.c_str(), static_cast<unsigned int>(syntax));
            fail_regex();
        } catch (const std::regex_error& e) {
            if (e.code() != expectedCode) {
                printf(R"(regex r("%s", 0x%X) threw 0x%X; expected 0x%X)"
                       "\n",
                    pattern.c_str(), static_cast<unsigned int>(syntax), static_cast<unsigned int>(e.code()),
                    static_cast<unsigned int>(expectedCode));
                fail_regex();
            }
        }
    }

    void should_throw(const std::wstring& pattern, const std::regex_constants::error_type expectedCode,
        const std::regex_constants::syntax_option_type syntax = std::regex_constants::ECMAScript) {
        try {
            const std::wregex r(pattern, syntax);
            wprintf(LR"(wregex r("%s", 0x%X) succeeded (which is bad).)"
                    L"\n",
                pattern.c_str(), static_cast<unsigned int>(syntax));
            fail_regex();
        } catch (const std::regex_error& e) {
            if (e.code() != expectedCode) {
                wprintf(LR"(wregex r("%s", 0x%X) threw 0x%X; expected 0x%X)"
                        L"\n",
                    pattern.c_str(), static_cast<unsigned int>(syntax), static_cast<unsigned int>(e.code()),
                    static_cast<unsigned int>(expectedCode));
                fail_regex();
            }
        }
    }
};

class test_regex {
    regex_fixture* const fixture;
    const std::string pattern;
    const std::regex_constants::syntax_option_type syntax;
    const std::regex r;

public:
    test_regex(regex_fixture* fixture, const std::string& pattern,
        std::regex_constants::syntax_option_type syntax = std::regex_constants::ECMAScript)
        : fixture(fixture), pattern(pattern), syntax(syntax), r(pattern, syntax) {}

    test_regex(const test_regex&)            = delete;
    test_regex& operator=(const test_regex&) = delete;

    void should_search_match(const std::string& subject, const std::string& expected,
        const std::regex_constants::match_flag_type match_flags = std::regex_constants::match_default) const {
        std::smatch mr;
        try {
            const bool search_result = std::regex_search(subject, mr, r, match_flags);
            if (!search_result || mr[0] != expected) {
                printf(R"(Expected regex_search("%s", regex("%s", 0x%X), 0x%X) to find "%s", )", subject.c_str(),
                    pattern.c_str(), static_cast<unsigned int>(syntax), static_cast<unsigned int>(match_flags),
                    expected.c_str());
                if (search_result) {
                    printf(R"(but it matched "%s")"
                           "\n",
                        mr.str().c_str());
                } else {
                    puts("but it failed to match");
                }

                fixture->fail_regex();
            }
        } catch (const std::regex_error& e) {
            printf(R"(Failed to regex_search("%s", regex("%s", 0x%X), 0x%X): regex_error: "%s")"
                   "\n",
                subject.c_str(), pattern.c_str(), static_cast<unsigned int>(syntax),
                static_cast<unsigned int>(match_flags), e.what());
            fixture->fail_regex();
        }
    }

    void should_search_fail(const std::string& subject,
        const std::regex_constants::match_flag_type match_flags = std::regex_constants::match_default) const {
        std::smatch mr;
        try {
            if (std::regex_search(subject, mr, r, match_flags)) {
                printf(R"(Expected regex_search("%s", regex("%s", 0x%X), 0x%X) to not match, but it found "%s")"
                       "\n",
                    subject.c_str(), pattern.c_str(), static_cast<unsigned int>(syntax),
                    static_cast<unsigned int>(match_flags), mr.str().c_str());
                fixture->fail_regex();
            }
        } catch (const std::regex_error& e) {
            printf(R"(Failed to regex_search("%s", regex("%s", 0x%X), 0x%X): regex_error: "%s")"
                   "\n",
                subject.c_str(), pattern.c_str(), static_cast<unsigned int>(syntax),
                static_cast<unsigned int>(match_flags), e.what());
            fixture->fail_regex();
        }
    }

    void should_search_match_capture_groups(const std::string& subject, const std::string& expected,
        const std::regex_constants::match_flag_type match_flags,
        std::initializer_list<std::pair<std::ptrdiff_t, std::ptrdiff_t>> capture_groups) const {
        std::smatch mr;
        try {
            const bool search_result = std::regex_search(subject, mr, r, match_flags);
            if (!search_result || mr[0] != expected) {
                printf(R"(Expected regex_search("%s", regex("%s", 0x%X), 0x%X) to find "%s", )", subject.c_str(),
                    pattern.c_str(), static_cast<unsigned int>(syntax), static_cast<unsigned int>(match_flags),
                    expected.c_str());
                if (search_result) {
                    printf(R"(but it matched "%s")"
                           "\n",
                        mr.str().c_str());
                } else {
                    puts("but it failed to match");
                }

                fixture->fail_regex();
            } else if (capture_groups.size() + 1 != mr.size()) {
                printf(R"(Expected regex_search("%s", regex("%s", 0x%X), 0x%X) to match %zu capture groups in "%s", )",
                    subject.c_str(), pattern.c_str(), static_cast<unsigned int>(syntax),
                    static_cast<unsigned int>(match_flags), capture_groups.size() + 1, expected.c_str());
                printf(R"(but it matched %zu groups)"
                       "\n",
                    mr.size());
                fixture->fail_regex();
            } else {
                bool submatches_success = true;
                for (std::size_t i = 1U; i < mr.size(); ++i) {
                    const auto& expected_capture = capture_groups.begin()[i - 1];
                    const auto& actual_capture   = mr[i];
                    if (expected_capture.first == -1) {
                        if (actual_capture.matched) {
                            submatches_success = false;
                            break;
                        }
                    } else if (!actual_capture.matched
                               || actual_capture.first != (subject.begin() + expected_capture.first)
                               || actual_capture.second != (subject.begin() + expected_capture.second)) {
                        submatches_success = false;
                        break;
                    }
                }
                if (!submatches_success) {
                    printf(R"(Expected regex_search("%s", regex("%s", 0x%X), 0x%X) to find capture groups {)",
                        subject.c_str(), pattern.c_str(), static_cast<unsigned int>(syntax),
                        static_cast<unsigned int>(match_flags));

                    bool initial = true;
                    for (const auto& expected_capture : capture_groups) {
                        std::string capture = "(unmatched)";
                        if (expected_capture.first != -1) {
                            capture.assign(
                                subject.begin() + expected_capture.first, subject.begin() + expected_capture.second);
                        }
                        printf(R"(%s"%s" [%td %td])", initial ? "" : ", ", capture.c_str(), expected_capture.first,
                            expected_capture.second);
                        initial = false;
                    }
                    printf(R"(} in "%s", but found {)", expected.c_str());

                    initial = true;
                    for (std::size_t i = 1U; i < mr.size(); ++i) {
                        const auto& actual_capture = mr[i];
                        std::string capture        = "(unmatched)";
                        std::ptrdiff_t first       = -1;
                        std::ptrdiff_t last        = -1;
                        if (actual_capture.matched) {
                            capture = actual_capture.str();
                            first   = actual_capture.first - subject.begin();
                            last    = actual_capture.second - subject.begin();
                        }
                        printf(R"(%s"%s" [%td %td])", initial ? "" : ", ", capture.c_str(), first, last);
                        initial = false;
                    }
                    printf("}\n");
                    fixture->fail_regex();
                }
            }
        } catch (const std::regex_error& e) {
            printf(R"(Failed to regex_search("%s", regex("%s", 0x%X), 0x%X): regex_error: "%s")"
                   "\n",
                subject.c_str(), pattern.c_str(), static_cast<unsigned int>(syntax),
                static_cast<unsigned int>(match_flags), e.what());
            fixture->fail_regex();
        }
    }
};

class test_wregex {
    regex_fixture* const fixture;
    const std::wstring pattern;
    const std::regex_constants::syntax_option_type syntax;
    const std::wregex r;

public:
    test_wregex(regex_fixture* fixture, const std::wstring& pattern,
        std::regex_constants::syntax_option_type syntax = std::regex_constants::ECMAScript)
        : fixture(fixture), pattern(pattern), syntax(syntax), r(pattern, syntax) {}

    test_wregex(const test_wregex&)            = delete;
    test_wregex& operator=(const test_wregex&) = delete;

    void should_search_match(const std::wstring& subject, const std::wstring& expected,
        const std::regex_constants::match_flag_type match_flags = std::regex_constants::match_default) const {
        std::wsmatch mr;
        try {
            const bool search_result = std::regex_search(subject, mr, r, match_flags);
            if (!search_result || mr[0] != expected) {
                wprintf(LR"(Expected regex_search("%s", regex("%s", 0x%X), 0x%X) to find "%s", )", subject.c_str(),
                    pattern.c_str(), static_cast<unsigned int>(syntax), static_cast<unsigned int>(match_flags),
                    expected.c_str());
                if (search_result) {
                    wprintf(LR"(but it matched "%s")"
                            "\n",
                        mr.str().c_str());
                } else {
                    puts("but it failed to match");
                }

                fixture->fail_regex();
            }
        } catch (const std::regex_error& e) {
            wprintf(LR"(Failed to regex_search("%s", regex("%s", 0x%X), 0x%X): regex_error: )", subject.c_str(),
                pattern.c_str(), static_cast<unsigned int>(syntax), static_cast<unsigned int>(match_flags));
            printf("\"%s\"\n", e.what());
            fixture->fail_regex();
        }
    }

    void should_search_fail(const std::wstring& subject,
        const std::regex_constants::match_flag_type match_flags = std::regex_constants::match_default) const {
        std::wsmatch mr;
        try {
            if (std::regex_search(subject, mr, r, match_flags)) {
                wprintf(LR"(Expected regex_search("%s", regex("%s", 0x%X), 0x%X) to not match, but it found "%s")"
                        "\n",
                    subject.c_str(), pattern.c_str(), static_cast<unsigned int>(syntax),
                    static_cast<unsigned int>(match_flags), mr.str().c_str());
                fixture->fail_regex();
            }
        } catch (const std::regex_error& e) {
            wprintf(LR"(Failed to regex_search("%s", regex("%s", 0x%X), 0x%X): regex_error: )", subject.c_str(),
                pattern.c_str(), static_cast<unsigned int>(syntax), static_cast<unsigned int>(match_flags));
            printf("\"%s\"\n", e.what());
            fixture->fail_regex();
        }
    }
};
