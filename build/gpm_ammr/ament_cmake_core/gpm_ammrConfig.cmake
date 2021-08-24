# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_gpm_ammr_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED gpm_ammr_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(gpm_ammr_FOUND FALSE)
  elseif(NOT gpm_ammr_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(gpm_ammr_FOUND FALSE)
  endif()
  return()
endif()
set(_gpm_ammr_CONFIG_INCLUDED TRUE)

# output package information
if(NOT gpm_ammr_FIND_QUIETLY)
  message(STATUS "Found gpm_ammr: 0.0.0 (${gpm_ammr_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'gpm_ammr' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${gpm_ammr_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(gpm_ammr_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${gpm_ammr_DIR}/${_extra}")
endforeach()
