# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DiceMagicApp_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DiceMagicApp_autogen.dir/ParseCache.txt"
  "DiceMagicApp_autogen"
  )
endif()
