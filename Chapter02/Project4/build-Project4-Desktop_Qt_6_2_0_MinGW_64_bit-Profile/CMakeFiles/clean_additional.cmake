# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\Project4_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Project4_autogen.dir\\ParseCache.txt"
  "Project4_autogen"
  )
endif()
