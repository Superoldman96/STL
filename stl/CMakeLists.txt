# Copyright (c) Microsoft Corporation.
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

##################################################
# Lists of files. (We can also copy files here.) #
##################################################

set(HEADERS
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_all_public_headers.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_bit_utils.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_chrono.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_cxx_stdatomic.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_filebuf.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_format_ucd_tables.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_formatter.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_heap_algorithms.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_int128.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_iter_core.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_minmax.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_ostream.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_print.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_ranges_to.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_ranges_tuple_formatter.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_sanitizer_annotate_container.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_string_view.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_system_error_abi.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_threads_core.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_tzdb.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/__msvc_xlocinfo_types.hpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/algorithm
    ${CMAKE_CURRENT_LIST_DIR}/inc/any
    ${CMAKE_CURRENT_LIST_DIR}/inc/array
    ${CMAKE_CURRENT_LIST_DIR}/inc/atomic
    ${CMAKE_CURRENT_LIST_DIR}/inc/barrier
    ${CMAKE_CURRENT_LIST_DIR}/inc/bit
    ${CMAKE_CURRENT_LIST_DIR}/inc/bitset
    ${CMAKE_CURRENT_LIST_DIR}/inc/cassert
    ${CMAKE_CURRENT_LIST_DIR}/inc/ccomplex
    ${CMAKE_CURRENT_LIST_DIR}/inc/cctype
    ${CMAKE_CURRENT_LIST_DIR}/inc/cerrno
    ${CMAKE_CURRENT_LIST_DIR}/inc/cfenv
    ${CMAKE_CURRENT_LIST_DIR}/inc/cfloat
    ${CMAKE_CURRENT_LIST_DIR}/inc/charconv
    ${CMAKE_CURRENT_LIST_DIR}/inc/chrono
    ${CMAKE_CURRENT_LIST_DIR}/inc/cinttypes
    ${CMAKE_CURRENT_LIST_DIR}/inc/ciso646
    ${CMAKE_CURRENT_LIST_DIR}/inc/climits
    ${CMAKE_CURRENT_LIST_DIR}/inc/clocale
    ${CMAKE_CURRENT_LIST_DIR}/inc/cmath
    ${CMAKE_CURRENT_LIST_DIR}/inc/codecvt
    ${CMAKE_CURRENT_LIST_DIR}/inc/compare
    ${CMAKE_CURRENT_LIST_DIR}/inc/complex
    ${CMAKE_CURRENT_LIST_DIR}/inc/concepts
    ${CMAKE_CURRENT_LIST_DIR}/inc/condition_variable
    ${CMAKE_CURRENT_LIST_DIR}/inc/coroutine
    ${CMAKE_CURRENT_LIST_DIR}/inc/csetjmp
    ${CMAKE_CURRENT_LIST_DIR}/inc/csignal
    ${CMAKE_CURRENT_LIST_DIR}/inc/cstdalign
    ${CMAKE_CURRENT_LIST_DIR}/inc/cstdarg
    ${CMAKE_CURRENT_LIST_DIR}/inc/cstdbool
    ${CMAKE_CURRENT_LIST_DIR}/inc/cstddef
    ${CMAKE_CURRENT_LIST_DIR}/inc/cstdint
    ${CMAKE_CURRENT_LIST_DIR}/inc/cstdio
    ${CMAKE_CURRENT_LIST_DIR}/inc/cstdlib
    ${CMAKE_CURRENT_LIST_DIR}/inc/cstring
    ${CMAKE_CURRENT_LIST_DIR}/inc/ctgmath
    ${CMAKE_CURRENT_LIST_DIR}/inc/ctime
    ${CMAKE_CURRENT_LIST_DIR}/inc/cuchar
    ${CMAKE_CURRENT_LIST_DIR}/inc/cwchar
    ${CMAKE_CURRENT_LIST_DIR}/inc/cwctype
    ${CMAKE_CURRENT_LIST_DIR}/inc/deque
    ${CMAKE_CURRENT_LIST_DIR}/inc/exception
    ${CMAKE_CURRENT_LIST_DIR}/inc/execution
    ${CMAKE_CURRENT_LIST_DIR}/inc/expected
    ${CMAKE_CURRENT_LIST_DIR}/inc/experimental/coroutine
    ${CMAKE_CURRENT_LIST_DIR}/inc/experimental/filesystem
    ${CMAKE_CURRENT_LIST_DIR}/inc/experimental/generator
    ${CMAKE_CURRENT_LIST_DIR}/inc/experimental/resumable
    ${CMAKE_CURRENT_LIST_DIR}/inc/filesystem
    ${CMAKE_CURRENT_LIST_DIR}/inc/format
    ${CMAKE_CURRENT_LIST_DIR}/inc/forward_list
    ${CMAKE_CURRENT_LIST_DIR}/inc/fstream
    ${CMAKE_CURRENT_LIST_DIR}/inc/functional
    ${CMAKE_CURRENT_LIST_DIR}/inc/future
    ${CMAKE_CURRENT_LIST_DIR}/inc/generator
    ${CMAKE_CURRENT_LIST_DIR}/inc/hash_map
    ${CMAKE_CURRENT_LIST_DIR}/inc/hash_set
    ${CMAKE_CURRENT_LIST_DIR}/inc/header-units.json
    ${CMAKE_CURRENT_LIST_DIR}/inc/initializer_list
    ${CMAKE_CURRENT_LIST_DIR}/inc/iomanip
    ${CMAKE_CURRENT_LIST_DIR}/inc/ios
    ${CMAKE_CURRENT_LIST_DIR}/inc/iosfwd
    ${CMAKE_CURRENT_LIST_DIR}/inc/iostream
    ${CMAKE_CURRENT_LIST_DIR}/inc/iso646.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/istream
    ${CMAKE_CURRENT_LIST_DIR}/inc/iterator
    ${CMAKE_CURRENT_LIST_DIR}/inc/latch
    ${CMAKE_CURRENT_LIST_DIR}/inc/limits
    ${CMAKE_CURRENT_LIST_DIR}/inc/list
    ${CMAKE_CURRENT_LIST_DIR}/inc/locale
    ${CMAKE_CURRENT_LIST_DIR}/inc/map
    ${CMAKE_CURRENT_LIST_DIR}/inc/mdspan
    ${CMAKE_CURRENT_LIST_DIR}/inc/memory
    ${CMAKE_CURRENT_LIST_DIR}/inc/memory_resource
    ${CMAKE_CURRENT_LIST_DIR}/inc/mutex
    ${CMAKE_CURRENT_LIST_DIR}/inc/new
    ${CMAKE_CURRENT_LIST_DIR}/inc/numbers
    ${CMAKE_CURRENT_LIST_DIR}/inc/numeric
    ${CMAKE_CURRENT_LIST_DIR}/inc/optional
    ${CMAKE_CURRENT_LIST_DIR}/inc/ostream
    ${CMAKE_CURRENT_LIST_DIR}/inc/print
    ${CMAKE_CURRENT_LIST_DIR}/inc/queue
    ${CMAKE_CURRENT_LIST_DIR}/inc/random
    ${CMAKE_CURRENT_LIST_DIR}/inc/ranges
    ${CMAKE_CURRENT_LIST_DIR}/inc/ratio
    ${CMAKE_CURRENT_LIST_DIR}/inc/regex
    ${CMAKE_CURRENT_LIST_DIR}/inc/scoped_allocator
    ${CMAKE_CURRENT_LIST_DIR}/inc/semaphore
    ${CMAKE_CURRENT_LIST_DIR}/inc/set
    ${CMAKE_CURRENT_LIST_DIR}/inc/shared_mutex
    ${CMAKE_CURRENT_LIST_DIR}/inc/source_location
    ${CMAKE_CURRENT_LIST_DIR}/inc/span
    ${CMAKE_CURRENT_LIST_DIR}/inc/spanstream
    ${CMAKE_CURRENT_LIST_DIR}/inc/sstream
    ${CMAKE_CURRENT_LIST_DIR}/inc/stack
    ${CMAKE_CURRENT_LIST_DIR}/inc/stacktrace
    ${CMAKE_CURRENT_LIST_DIR}/inc/stdexcept
    ${CMAKE_CURRENT_LIST_DIR}/inc/stdfloat
    ${CMAKE_CURRENT_LIST_DIR}/inc/stop_token
    ${CMAKE_CURRENT_LIST_DIR}/inc/streambuf
    ${CMAKE_CURRENT_LIST_DIR}/inc/string
    ${CMAKE_CURRENT_LIST_DIR}/inc/string_view
    ${CMAKE_CURRENT_LIST_DIR}/inc/strstream
    ${CMAKE_CURRENT_LIST_DIR}/inc/syncstream
    ${CMAKE_CURRENT_LIST_DIR}/inc/system_error
    ${CMAKE_CURRENT_LIST_DIR}/inc/thread
    ${CMAKE_CURRENT_LIST_DIR}/inc/tuple
    ${CMAKE_CURRENT_LIST_DIR}/inc/type_traits
    ${CMAKE_CURRENT_LIST_DIR}/inc/typeindex
    ${CMAKE_CURRENT_LIST_DIR}/inc/typeinfo
    ${CMAKE_CURRENT_LIST_DIR}/inc/unordered_map
    ${CMAKE_CURRENT_LIST_DIR}/inc/unordered_set
    ${CMAKE_CURRENT_LIST_DIR}/inc/use_ansi.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/utility
    ${CMAKE_CURRENT_LIST_DIR}/inc/valarray
    ${CMAKE_CURRENT_LIST_DIR}/inc/variant
    ${CMAKE_CURRENT_LIST_DIR}/inc/vector
    ${CMAKE_CURRENT_LIST_DIR}/inc/version
    ${CMAKE_CURRENT_LIST_DIR}/inc/xatomic.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xatomic_wait.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xbit_ops.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xcall_once.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xcharconv.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xcharconv_ryu.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xcharconv_ryu_tables.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xcharconv_tables.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xerrc.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xfacet
    ${CMAKE_CURRENT_LIST_DIR}/inc/xfilesystem_abi.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xhash
    ${CMAKE_CURRENT_LIST_DIR}/inc/xiosbase
    ${CMAKE_CURRENT_LIST_DIR}/inc/xkeycheck.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xlocale
    ${CMAKE_CURRENT_LIST_DIR}/inc/xlocbuf
    ${CMAKE_CURRENT_LIST_DIR}/inc/xlocinfo
    ${CMAKE_CURRENT_LIST_DIR}/inc/xlocmes
    ${CMAKE_CURRENT_LIST_DIR}/inc/xlocmon
    ${CMAKE_CURRENT_LIST_DIR}/inc/xlocnum
    ${CMAKE_CURRENT_LIST_DIR}/inc/xloctime
    ${CMAKE_CURRENT_LIST_DIR}/inc/xmemory
    ${CMAKE_CURRENT_LIST_DIR}/inc/xnode_handle.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xpolymorphic_allocator.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xsmf_control.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xstring
    ${CMAKE_CURRENT_LIST_DIR}/inc/xthreads.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xtimec.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/xtr1common
    ${CMAKE_CURRENT_LIST_DIR}/inc/xtree
    ${CMAKE_CURRENT_LIST_DIR}/inc/xutility
    ${CMAKE_CURRENT_LIST_DIR}/inc/ymath.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/yvals.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/yvals_core.h
)

foreach(header ${HEADERS})
    file(RELATIVE_PATH _header_path "${CMAKE_CURRENT_LIST_DIR}/inc" "${header}")
    configure_file("${header}" "${PROJECT_BINARY_DIR}/out/inc/${_header_path}" COPYONLY)
endforeach()

set(MODULE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/modules/modules.json
    ${CMAKE_CURRENT_LIST_DIR}/modules/std.ixx
    ${CMAKE_CURRENT_LIST_DIR}/modules/std.compat.ixx
)

foreach(module_file ${MODULE_FILES})
    file(RELATIVE_PATH _module_file_path "${CMAKE_CURRENT_LIST_DIR}/modules" "${module_file}")
    configure_file("${module_file}" "${PROJECT_BINARY_DIR}/out/modules/${_module_file_path}" COPYONLY)
endforeach()

# Objs that implement aliases; these are completely independent of the configuration
set(ALIAS_SOURCES_X86_X64
    ${CMAKE_CURRENT_LIST_DIR}/src/alias_init_once_begin_initialize.asm
    ${CMAKE_CURRENT_LIST_DIR}/src/alias_init_once_complete.asm
)

# Objs that exist in both libcpmt[d][01].lib and msvcprt[d].lib.
set(IMPLIB_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/src/asan_noop.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/charconv.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/filesystem.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/format.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/locale0_implib.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/nothrow.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/print.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/regex.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/sharedmutex.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/stacktrace.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/syserror_import_lib.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/vector_algorithms.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xcharconv_ryu_tables.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xcharconv_tables_double.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xcharconv_tables_float.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xonce2.cpp
)

# The following files are linked in msvcp140[d][_clr].dll.
set(DLL_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/src/dllmain.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/instances.cpp
)

# Sources that must not be compiled with /GL, since they contain CRT initializers.
set(INITIALIZER_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/src/winapisupp.cpp
)

set(SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/src/StlCompareStringA.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/StlCompareStringW.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/StlLCMapStringA.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/StlLCMapStringW.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/_tolower.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/_toupper.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/atomic.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/cerr.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/cin.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/clog.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/cond.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/cout.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/cthread.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/filesys.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/fiopen.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/future.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/iomanip.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/ios.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/iosptrs.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/iostream.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/locale.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/locale0.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/multprec.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/mutex.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/pplerror.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/ppltasks.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/raisehan.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/stdhndlr.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/stdthrow.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/syserror.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/taskscheduler.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/thread0.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/uncaught_exception.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/uncaught_exceptions.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/ushcerr.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/ushcin.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/ushclog.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/ushcout.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/ushiostr.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/wcerr.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/wcin.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/wclog.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/wcout.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/winapinls.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/wiostrea.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/wlocale.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xalloc.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xcosh.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xdateord.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xdint.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xdnorm.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xdscale.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xdtento.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xdtest.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xdunscal.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xexp.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfcosh.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfdint.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfdnorm.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfdscale.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfdtento.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfdtest.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfdunsca.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xferaise.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfexp.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfprec.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfsinh.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xfvalues.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xgetwctype.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xlcosh.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xldint.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xldscale.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xldtento.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xldtest.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xldunsca.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xlexp.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xlgamma.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xlocale.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xlock.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xlpoly.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xlprec.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xlsinh.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xlvalues.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xmbtowc.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xmtx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xnotify.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xonce.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xpoly.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xprec.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xrngabort.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xrngdev.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xsinh.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstod.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstof.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstoflt.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstol.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstold.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstoll.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstopfx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstoul.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstoull.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstoxflt.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstrcoll.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xstrxfrm.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xthrow.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xtime.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xtowlower.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xtowupper.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xvalues.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xwcscoll.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xwcsxfrm.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xwctomb.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xwstod.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xwstof.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xwstoflt.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xwstold.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xwstopfx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/xwstoxfl.cpp
)

set(ASAN_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/src/asan.cpp
)

set(EHA_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/src/excptptr.cpp
)

set(SOURCES_SATELLITE_1
    ${CMAKE_CURRENT_LIST_DIR}/src/memory_resource.cpp
)

set(SOURCES_SATELLITE_2
    ${CMAKE_CURRENT_LIST_DIR}/src/special_math.cpp
)

set(SOURCES_SATELLITE_ATOMIC_WAIT
    ${CMAKE_CURRENT_LIST_DIR}/src/atomic_wait.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/parallel_algorithms.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/syncstream.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/tzdb.cpp
)

set(SOURCES_SATELLITE_CODECVT_IDS
    ${CMAKE_CURRENT_LIST_DIR}/src/ulocale.cpp
)

# Objs that exist only in libcpmt[d][01].lib.
set(STATIC_SOURCES
    ${SOURCES_SATELLITE_1}
    ${SOURCES_SATELLITE_2}
    ${SOURCES_SATELLITE_ATOMIC_WAIT}
    ${SOURCES_SATELLITE_CODECVT_IDS}
)

# Objs that exist in all satellite DLLs
set(SATELLITE_DLL_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/src/dllmain_satellite.cpp
)

####################
# Toolset options. #
####################

set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "")
set(CMAKE_CXX_FLAGS_RELEASE "")
set(CMAKE_CXX_STANDARD_LIBRARIES "kernel32.lib")
set(CMAKE_CXX_STANDARD_LIBRARIES_INIT "kernel32.lib")
set(CMAKE_MSVC_RUNTIME_LIBRARY "")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${STL_ARCHIVE_OUTPUT_DIRECTORY}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${STL_LIBRARY_OUTPUT_DIRECTORY}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${STL_RUNTIME_OUTPUT_DIRECTORY}")

set(CMAKE_STATIC_LINKER_FLAGS "/WX")
set(CMAKE_STATIC_LINKER_FLAGS_DEBUG "")
set(CMAKE_STATIC_LINKER_FLAGS_RELEASE "")
set(CMAKE_SHARED_LINKER_FLAGS "/DEBUG:FULL /WX /RELEASE /SUBSYSTEM:Console /NODEFAULTLIB /INCREMENTAL:NO /MANIFEST:NO /DLL /profile /guard:cf /DEBUGTYPE:cv,fixup /LARGEADDRESSAWARE")
set(CMAKE_SHARED_LINKER_FLAGS_DEBUG "")
set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "")

# Toolset options must appear before add_library() for the options to take effect.
add_compile_definitions(_CRTBLD _HAS_OLD_IOSTREAMS_MEMBERS=1)

# /Z7 for MSVC, /Zi for MASM
set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "Embedded")

add_compile_options(/nologo /WX /Gy
    "$<$<COMPILE_LANGUAGE:CXX>:/diagnostics:caret;/W4;/w14265;/w15038;/fastfail;/guard:cf;/Zp8;/std:c++latest;/permissive-;/Zc:preprocessor;/Zc:threadSafeInit-;/Zl>"
    "$<$<COMPILE_LANGUAGE:ASM_MASM>:/W3;/quiet>"
)

include_directories(BEFORE
    "${CMAKE_CURRENT_LIST_DIR}/inc"
    "${TOOLSET_ROOT_DIR}/crt/src/vcruntime"
)

###########################
# End of toolset options. #
###########################

if(VCLIBS_TARGET_ARCHITECTURE MATCHES "^(x86|x64)$")
    add_library(stl_alias_objects OBJECT ${ALIAS_SOURCES_X86_X64})
else()
    add_library(stl_alias_objects INTERFACE)
endif()

if(STL_ASAN_BUILD)
    set(DLL_ASAN_SOURCES ${ASAN_SOURCES})
else()
    set(DLL_ASAN_SOURCES "")
endif()

function(target_stl_compile_options tgt rel_or_dbg)
    if(rel_or_dbg STREQUAL "Release")
        target_compile_options(${tgt} PRIVATE ${VCLIBS_RELEASE_OPTIONS})
    elseif(rel_or_dbg STREQUAL "Debug")
        target_compile_options(${tgt} PRIVATE ${VCLIBS_DEBUG_OPTIONS})
        target_compile_definitions(${tgt} PRIVATE "_DEBUG")
    else()
        message(FATAL_ERROR "INTERNAL ERROR: unexpected value for rel_or_dbg: '${rel_or_dbg}'")
    endif()
endfunction()

function(generate_satellite_def SATELLITE_NAME D_SUFFIX)
    set(full_satellite_name "msvcp140${D_SUFFIX}_${SATELLITE_NAME}${VCLIBS_SUFFIX}")
    string(TOUPPER "${full_satellite_name}" upper_full_satellite_name)
    set(satellite_input_src_file_path "${CMAKE_CURRENT_LIST_DIR}/src/msvcp_${SATELLITE_NAME}.src")
    set(satellite_output_def_file_path "${CMAKE_BINARY_DIR}/msvcp_${SATELLITE_NAME}${D_SUFFIX}.def")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${satellite_input_src_file_path}")

    # We use the placeholder name "LIBRARYNAME" in the corresponding .src file of a satellite DLL
    # (i.e., we write "LIBRARY LIBRARYNAME" as the first non-commented line in the file).
    #
    # Here, we dynamically replace this placeholder name with the name of the satellite DLL for
    # the current build configuration. Then, we write out the new .def file to the binary output
    # directory.
    file(READ "${satellite_input_src_file_path}" satellite_def_file_contents)
    string(REPLACE "LIBRARYNAME" "${upper_full_satellite_name}" satellite_def_file_contents "${satellite_def_file_contents}")
    file(GENERATE OUTPUT "${satellite_output_def_file_path}" CONTENT "${satellite_def_file_contents}")
endfunction()

function(add_stl_dlls D_SUFFIX REL_OR_DBG)
    set(link_options_Release "/LTCG;/opt:ref,icf;${VCLIBS_EXPLICIT_MACHINE}")
    set(link_options_Debug "/opt:ref,noicf;${VCLIBS_EXPLICIT_MACHINE}")

    set(gl_flag_Release "/GL")
    set(gl_flag_Debug "")

    # msvcp140.dll
    add_library(msvcp${D_SUFFIX}_objects OBJECT ${DLL_SOURCES} ${SOURCES} ${DLL_ASAN_SOURCES})
    target_compile_definitions(msvcp${D_SUFFIX}_objects PRIVATE CRTDLL2 _DLL)
    target_compile_options(msvcp${D_SUFFIX}_objects PRIVATE ${gl_flag_${REL_OR_DBG}} /EHsc)
    target_stl_compile_options(msvcp${D_SUFFIX}_objects ${REL_OR_DBG})

    add_library(msvcp${D_SUFFIX}_init_objects OBJECT ${INITIALIZER_SOURCES})
    target_compile_definitions(msvcp${D_SUFFIX}_init_objects PRIVATE CRTDLL2 _DLL)
    target_compile_options(msvcp${D_SUFFIX}_init_objects PRIVATE /EHsc)
    target_stl_compile_options(msvcp${D_SUFFIX}_init_objects ${REL_OR_DBG})

    add_library(msvcp${D_SUFFIX}_eha_objects OBJECT ${EHA_SOURCES})
    target_compile_definitions(msvcp${D_SUFFIX}_eha_objects PRIVATE CRTDLL2 _DLL)
    target_compile_options(msvcp${D_SUFFIX}_eha_objects PRIVATE ${gl_flag_${REL_OR_DBG}} /EHa)
    target_stl_compile_options(msvcp${D_SUFFIX}_eha_objects ${REL_OR_DBG})

    add_library(msvcp${D_SUFFIX} SHARED)
    target_link_libraries(msvcp${D_SUFFIX} PRIVATE msvcp${D_SUFFIX}_eha_objects msvcp${D_SUFFIX}_objects msvcp${D_SUFFIX}_init_objects "${TOOLSET_LIB}/vcruntime${D_SUFFIX}.lib" "${TOOLSET_LIB}/msvcrt${D_SUFFIX}.lib" "ucrt${D_SUFFIX}.lib")
    if(VCLIBS_TARGET_ARCHITECTURE MATCHES "^(arm64|arm64ec)$")
        target_link_libraries(msvcp${D_SUFFIX} PRIVATE "softintrin.lib")
    endif()
    set_target_properties(msvcp${D_SUFFIX} PROPERTIES ARCHIVE_OUTPUT_NAME "msvcp140_base${D_SUFFIX}${VCLIBS_SUFFIX}")
    set_target_properties(msvcp${D_SUFFIX} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    set_target_properties(msvcp${D_SUFFIX} PROPERTIES OUTPUT_NAME "msvcp140${D_SUFFIX}${VCLIBS_SUFFIX}")
    target_link_options(msvcp${D_SUFFIX} PRIVATE ${link_options_${REL_OR_DBG}})

    # import library 'statics'
    add_library(msvcp${D_SUFFIX}_implib_objects OBJECT ${IMPLIB_SOURCES})
    target_compile_definitions(msvcp${D_SUFFIX}_implib_objects PRIVATE _DLL _ENFORCE_ONLY_CORE_HEADERS)
    target_compile_options(msvcp${D_SUFFIX}_implib_objects PRIVATE /EHsc) # No /GL!
    target_stl_compile_options(msvcp${D_SUFFIX}_implib_objects ${REL_OR_DBG})

    add_library(msvcp${D_SUFFIX}_satellite_objects OBJECT ${SATELLITE_DLL_SOURCES})
    target_compile_definitions(msvcp${D_SUFFIX}_satellite_objects PRIVATE _DLL)
    target_compile_options(msvcp${D_SUFFIX}_satellite_objects PRIVATE ${gl_flag_${REL_OR_DBG}} /EHsc)
    target_stl_compile_options(msvcp${D_SUFFIX}_satellite_objects ${REL_OR_DBG})

    # msvcp140_1.dll (the memory_resource satellite)
    add_library(msvcp_1${D_SUFFIX}_objects OBJECT ${SOURCES_SATELLITE_1})
    target_compile_definitions(msvcp_1${D_SUFFIX}_objects PRIVATE _BUILDING_SATELLITE_1 _DLL)
    target_compile_options(msvcp_1${D_SUFFIX}_objects PRIVATE ${gl_flag_${REL_OR_DBG}} /EHsc)
    target_stl_compile_options(msvcp_1${D_SUFFIX}_objects ${REL_OR_DBG})

    add_library(msvcp_1${D_SUFFIX} SHARED)
    target_link_libraries(msvcp_1${D_SUFFIX} PRIVATE msvcp_1${D_SUFFIX}_objects msvcp${D_SUFFIX}_satellite_objects "msvcp${D_SUFFIX}" "${TOOLSET_LIB}/vcruntime${D_SUFFIX}.lib" "${TOOLSET_LIB}/msvcrt${D_SUFFIX}.lib" "ucrt${D_SUFFIX}.lib")
    set_target_properties(msvcp_1${D_SUFFIX} PROPERTIES ARCHIVE_OUTPUT_NAME "msvcp140_1${D_SUFFIX}${VCLIBS_SUFFIX}")
    set_target_properties(msvcp_1${D_SUFFIX} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    set_target_properties(msvcp_1${D_SUFFIX} PROPERTIES OUTPUT_NAME "msvcp140_1${D_SUFFIX}${VCLIBS_SUFFIX}")
    target_link_options(msvcp_1${D_SUFFIX} PRIVATE ${link_options_${REL_OR_DBG}})

    # msvcp140_2.dll (the special math satellite)
    add_library(msvcp_2${D_SUFFIX}_objects OBJECT ${SOURCES_SATELLITE_2})
    target_compile_definitions(msvcp_2${D_SUFFIX}_objects PRIVATE _BUILDING_SATELLITE_2 _DLL)
    target_compile_options(msvcp_2${D_SUFFIX}_objects PRIVATE ${gl_flag_${REL_OR_DBG}} /EHsc)
    target_link_libraries(msvcp_2${D_SUFFIX}_objects PRIVATE Boost::math)
    target_stl_compile_options(msvcp_2${D_SUFFIX}_objects ${REL_OR_DBG})

    add_library(msvcp_2${D_SUFFIX} SHARED)
    target_link_libraries(msvcp_2${D_SUFFIX} PRIVATE msvcp_2${D_SUFFIX}_objects msvcp${D_SUFFIX}_satellite_objects msvcp${D_SUFFIX}_implib_objects msvcp${D_SUFFIX} "${TOOLSET_LIB}/vcruntime${D_SUFFIX}.lib" "${TOOLSET_LIB}/msvcrt${D_SUFFIX}.lib" "ucrt${D_SUFFIX}.lib")
    set_target_properties(msvcp_2${D_SUFFIX} PROPERTIES ARCHIVE_OUTPUT_NAME "msvcp140_2${D_SUFFIX}${VCLIBS_SUFFIX}")
    set_target_properties(msvcp_2${D_SUFFIX} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    set_target_properties(msvcp_2${D_SUFFIX} PROPERTIES OUTPUT_NAME "msvcp140_2${D_SUFFIX}${VCLIBS_SUFFIX}")
    target_link_options(msvcp_2${D_SUFFIX} PRIVATE ${link_options_${REL_OR_DBG}})

    # msvcp140_atomic_wait.dll (the atomic wait satellite)
    add_library(msvcp${D_SUFFIX}_atomic_wait_objects OBJECT ${SOURCES_SATELLITE_ATOMIC_WAIT})
    target_compile_definitions(msvcp${D_SUFFIX}_atomic_wait_objects PRIVATE _BUILDING_SATELLITE_ATOMIC_WAIT _DLL)
    target_compile_options(msvcp${D_SUFFIX}_atomic_wait_objects PRIVATE ${gl_flag_${REL_OR_DBG}} /EHsc)
    target_stl_compile_options(msvcp${D_SUFFIX}_atomic_wait_objects ${REL_OR_DBG})

    # generate the .def for msvcp140_atomic_wait.dll
    generate_satellite_def("atomic_wait" "${D_SUFFIX}")

    add_library(msvcp${D_SUFFIX}_atomic_wait SHARED "${CMAKE_BINARY_DIR}/msvcp_atomic_wait${D_SUFFIX}.def")
    target_link_libraries(msvcp${D_SUFFIX}_atomic_wait PRIVATE msvcp${D_SUFFIX}_atomic_wait_objects msvcp${D_SUFFIX}_satellite_objects msvcp${D_SUFFIX}_implib_objects "msvcp${D_SUFFIX}" "${TOOLSET_LIB}/vcruntime${D_SUFFIX}.lib" "${TOOLSET_LIB}/msvcrt${D_SUFFIX}.lib" "ucrt${D_SUFFIX}.lib" "advapi32.lib" "synchronization.lib")
    set_target_properties(msvcp${D_SUFFIX}_atomic_wait PROPERTIES ARCHIVE_OUTPUT_NAME "msvcp140_atomic_wait${D_SUFFIX}${VCLIBS_SUFFIX}")
    set_target_properties(msvcp${D_SUFFIX}_atomic_wait PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    set_target_properties(msvcp${D_SUFFIX}_atomic_wait PROPERTIES OUTPUT_NAME "msvcp140${D_SUFFIX}_atomic_wait${VCLIBS_SUFFIX}")
    target_link_options(msvcp${D_SUFFIX}_atomic_wait PRIVATE ${link_options_${REL_OR_DBG}})

    # msvcp140_codecvt_ids.dll
    add_library(msvcp${D_SUFFIX}_codecvt_ids_objects OBJECT ${SOURCES_SATELLITE_CODECVT_IDS})
    target_compile_definitions(msvcp${D_SUFFIX}_codecvt_ids_objects PRIVATE _BUILDING_SATELLITE_CODECVT_IDS _DLL)
    target_compile_options(msvcp${D_SUFFIX}_codecvt_ids_objects PRIVATE ${gl_flag_${REL_OR_DBG}} /EHsc)
    target_stl_compile_options(msvcp${D_SUFFIX}_codecvt_ids_objects ${REL_OR_DBG})

    add_library(msvcp${D_SUFFIX}_codecvt_ids SHARED)
    target_link_libraries(msvcp${D_SUFFIX}_codecvt_ids PRIVATE msvcp${D_SUFFIX}_codecvt_ids_objects msvcp${D_SUFFIX}_satellite_objects "msvcp${D_SUFFIX}" "${TOOLSET_LIB}/vcruntime${D_SUFFIX}.lib" "${TOOLSET_LIB}/msvcrt${D_SUFFIX}.lib" "ucrt${D_SUFFIX}.lib")
    set_target_properties(msvcp${D_SUFFIX}_codecvt_ids PROPERTIES ARCHIVE_OUTPUT_NAME "msvcp140_codecvt_ids${D_SUFFIX}${VCLIBS_SUFFIX}")
    set_target_properties(msvcp${D_SUFFIX}_codecvt_ids PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    set_target_properties(msvcp${D_SUFFIX}_codecvt_ids PROPERTIES OUTPUT_NAME "msvcp140${D_SUFFIX}_codecvt_ids${VCLIBS_SUFFIX}")
    target_link_options(msvcp${D_SUFFIX}_codecvt_ids PRIVATE ${link_options_${REL_OR_DBG}})

    # import library
    add_library(msvcp${D_SUFFIX}_implib STATIC ${HEADERS})
    target_link_libraries(msvcp${D_SUFFIX}_implib stl_alias_objects msvcp${D_SUFFIX}_implib_objects)
    add_dependencies(msvcp${D_SUFFIX}_implib msvcp${D_SUFFIX} msvcp_1${D_SUFFIX} msvcp_2${D_SUFFIX} msvcp${D_SUFFIX}_atomic_wait msvcp${D_SUFFIX}_codecvt_ids)
    set_target_properties(msvcp${D_SUFFIX}_implib PROPERTIES STATIC_LIBRARY_OPTIONS "/NOLOGO;/NODEFAULTLIB;/IGNORE:4006;$<TARGET_LINKER_FILE:msvcp${D_SUFFIX}>;$<TARGET_LINKER_FILE:msvcp_1${D_SUFFIX}>;$<TARGET_LINKER_FILE:msvcp_2${D_SUFFIX}>;$<TARGET_LINKER_FILE:msvcp${D_SUFFIX}_codecvt_ids>;$<TARGET_LINKER_FILE:msvcp${D_SUFFIX}_atomic_wait>;${VCLIBS_EXPLICIT_MACHINE}")
    set_target_properties(msvcp${D_SUFFIX}_implib PROPERTIES ARCHIVE_OUTPUT_NAME "msvcprt${D_SUFFIX}")
endfunction()

add_stl_dlls("" Release)
add_stl_dlls("d" Debug)

function(add_stl_statics FLAVOR_SUFFIX REL_OR_DBG IDL_VALUE)
    add_library(libcpmt${FLAVOR_SUFFIX}_eha OBJECT ${EHA_SOURCES})
    target_compile_definitions(libcpmt${FLAVOR_SUFFIX}_eha PRIVATE _ANNOTATE_STL "_ITERATOR_DEBUG_LEVEL=${IDL_VALUE}")
    target_compile_options(libcpmt${FLAVOR_SUFFIX}_eha PRIVATE /EHa)
    target_stl_compile_options(libcpmt${FLAVOR_SUFFIX}_eha ${REL_OR_DBG})

    add_library(libcpmt${FLAVOR_SUFFIX} STATIC ${HEADERS} ${IMPLIB_SOURCES} ${SOURCES} ${INITIALIZER_SOURCES} ${STATIC_SOURCES})
    target_compile_definitions(libcpmt${FLAVOR_SUFFIX} PRIVATE _ANNOTATE_STL "_ITERATOR_DEBUG_LEVEL=${IDL_VALUE}")
    target_compile_options(libcpmt${FLAVOR_SUFFIX} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:/EHsc>")
    target_link_libraries(libcpmt${FLAVOR_SUFFIX} PRIVATE Boost::math stl_alias_objects libcpmt${FLAVOR_SUFFIX}_eha)
    target_stl_compile_options(libcpmt${FLAVOR_SUFFIX} ${REL_OR_DBG})
    set_target_properties(libcpmt${FLAVOR_SUFFIX} PROPERTIES STATIC_LIBRARY_OPTIONS "${VCLIBS_EXPLICIT_MACHINE}")
endfunction()

add_stl_statics("" Release 0)
add_stl_statics("1" Release 1)
add_stl_statics("d" Debug 2)
add_stl_statics("d1" Debug 1)
add_stl_statics("d0" Debug 0)

add_library(stl_asan STATIC ${ASAN_SOURCES})
set_target_properties(stl_asan PROPERTIES STATIC_LIBRARY_OPTIONS "${VCLIBS_EXPLICIT_MACHINE}")

configure_file(set_environment.bat.in "${PROJECT_BINARY_DIR}/set_environment.bat" @ONLY)
configure_file(set_environment.ps1.in "${PROJECT_BINARY_DIR}/set_environment.ps1" @ONLY)
