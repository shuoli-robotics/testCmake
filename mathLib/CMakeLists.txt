aux_source_directory(. DIR_MATH_LIB)
include_directories(. ./eigen)
add_library(mathLib SHARED ${DIR_MATH_LIB})
