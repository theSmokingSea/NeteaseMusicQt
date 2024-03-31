project(NeteaseNetwork)

add_definitions(-DNeteaseNetworkLibrary)


add_library(${PROJECT_NAME} STATIC
        NeteaseNetworkGlobal.h

        NetworkManager.cpp
        NetworkManager.h

        NetQRCode.h
        NetQRCode.cpp
)

target_link_libraries(
        ${PROJECT_NAME}
        PRIVATE
        Qt5::Core Qt5::Widgets Qt5::Gui Qt5::Network
)

target_include_directories(${PROJECT_NAME} INTERFACE .)