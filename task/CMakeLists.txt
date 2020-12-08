cmake_minimum_required( VERSION 3.1 )

set(
	SOURCES
		${CMAKE_CURRENT_SOURCE_DIR}/src/Str.cpp
		${CMAKE_CURRENT_SOURCE_DIR}/src/StrBuffer.cpp
)


#######################################################
project( example CXX )
add_executable(
	example
		${CMAKE_CURRENT_SOURCE_DIR}/src/Example.cpp
		${SOURCES}
)
target_include_directories(
	example
	PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
)
set_target_properties(
	example PROPERTIES
		CXX_STANDARD			11
		CXX_STANDARD_REQUIRED 	ON
		CXX_EXTENSIONS			OFF
)


