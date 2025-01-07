#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cppdap::cppdap" for configuration "Release"
set_property(TARGET cppdap::cppdap APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cppdap::cppdap PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libcppdap.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libcppdap.dll"
  )

list(APPEND _cmake_import_check_targets cppdap::cppdap )
list(APPEND _cmake_import_check_files_for_cppdap::cppdap "${_IMPORT_PREFIX}/lib/libcppdap.dll.a" "${_IMPORT_PREFIX}/bin/libcppdap.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
