# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\calculate_test_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\calculate_test_autogen.dir\\ParseCache.txt"
  "calculate_test_autogen"
  )
endif()
