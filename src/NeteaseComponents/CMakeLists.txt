project(NeteaseComponents)

add_definitions(-DNeteaseComponentsLibrary)

add_library(${PROJECT_NAME} SHARED
        NeteaseComponentsGlobal.h
        NMLabel.cpp
        NMLabel.h
)

target_link_libraries(
        ${PROJECT_NAME}
        PRIVATE
        Qt5::Core Qt5::Widgets Qt5::Gui
)

target_include_directories(${PROJECT_NAME} INTERFACE .)