cmake_minimum_required (VERSION 3.5)
project (helloWorld)
set (CMAKE_CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set (CMAKE_AUTOMOC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

# include QT 5.5.1
set (CMAKE_PREFIX_PATH $ENV{MOVAVI_SDK_PKG}/extracted/Qt/5.5.1/win-vs2015-v140_xp-x86)
find_package (Qt5Widgets REQUIRED)

# prepare workspace
file (GLOB QT_FILE_LIST ${CMAKE_CURRENT_SOURCE_DIR}/qtLib/*.dll)
file (COPY ${QT_FILE_LIST} ${CMAKE_CURRENT_SOURCE_DIR}/platforms DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
file (COPY ${QT_FILE_LIST} ${CMAKE_CURRENT_SOURCE_DIR}/platforms DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Release)

# sub projects
include (${CMAKE_CURRENT_SOURCE_DIR}/myDll/myDll.cmake)
include (${CMAKE_CURRENT_SOURCE_DIR}/myDll2/myDll2.cmake)

# main project
set (MAIN_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/myClass.h ${CMAKE_CURRENT_SOURCE_DIR}/testqt.h)
set (MAIN_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp ${CMAKE_CURRENT_SOURCE_DIR}/myClass.cpp ${CMAKE_CURRENT_SOURCE_DIR}/testqt.cpp)

add_executable (helloWorld ${MAIN_HEADERS} ${MAIN_SOURCES})

# link app with library
link_directories (${CMAKE_CURRENT_BINARY_DIR}/Debug)
target_link_libraries (helloWorld ${Qt5Widgets_LIBRARIES} ${CMAKE_CURRENT_BINARY_DIR}/Debug/myDll.lib ${CMAKE_CURRENT_BINARY_DIR}/Debug/myDll2.lib)

add_dependencies(helloWorld myDll myDll2)

qt5_use_modules(helloWorld Widgets)
