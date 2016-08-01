set (MY_DLL_HEADERS ${CMAKE_CURRENT_LIST_DIR}/myDllClass.h ${CMAKE_CURRENT_LIST_DIR}/myDllMacros.h)
set (MY_DLL_SOURCES ${CMAKE_CURRENT_LIST_DIR}/myDllClass.cpp)

add_library (myDll SHARED ${MY_DLL_HEADERS} ${MY_DLL_SOURCES})

target_link_libraries (myDll ${Qt5Widgets_LIBRARIES})