cmake_minimum_required(VERSION 3.21)

project(NeteaseMusicQt)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if(CMAKE_HOST_SYSTEM_NAME MATCHES "Darwin")
    set(Qt5_DIR /opt/homebrew/Cellar/qt@5/5.15.10/lib/cmake/Qt5)
endif()

if(MSVC)
    add_compile_options("/utf-8")
    add_definitions(-DUNICODE -D_UNICODE)
    add_compile_options(/MP)
endif ()

#检查编译器是否为GCC，使用-Wno-deprecated-declarations让GCC编译器忽略关于已弃用声明的警告。
if (CMAKE_COMPILER_IS_GNUCC)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-deprecated-declarations")
endif()
if (CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations")
endif()

set(qt_required_components Core Widgets Gui WebEngineWidgets Network)
find_package(Qt5 COMPONENTS ${qt_required_components} LinguistTools REQUIRED)

include(cmake/QtHelper.cmake)

add_subdirectory(src)
