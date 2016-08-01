set (MY_DLL_HEADERS ${CMAKE_CURRENT_LIST_DIR}/myDll2Class.h ${CMAKE_CURRENT_LIST_DIR}/myDll2Macros.h)
set (MY_DLL_SOURCES ${CMAKE_CURRENT_LIST_DIR}/myDll2Class.cpp)

add_library (myDll2 SHARED ${MY_DLL_HEADERS} ${MY_DLL_SOURCES})

target_link_libraries (myDll2 ${Qt5Widgets_LIBRARIES})