cmake_minimum_required( VERSION 3.10 )
set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

project( DNJ VERSION 1.0 )

file( GLOB SRC_FILES src/*.cpp ) # DISCOURAGED BY CMAKE STD

add_executable( ${PROJECT_NAME} ${SRC_FILES} )
target_include_directories( ${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include )