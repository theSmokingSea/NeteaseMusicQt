project(NeteaseGui)

add_definitions(-DNeteaseGuiLibrary)


add_library(${PROJECT_NAME} SHARED
        NeteaseGuiGlobal.h

        MainFrm.cpp
        MainFrm.h
        MainFrm.ui
        # 导航界面
        NavigationWidget.cpp
        NavigationWidget.h
        NavigationWidget.ui

        NavigationUserWidget.cpp
        NavigationUserWidget.h
        NavigationUserWidget.ui

        # 登陆
        NavigationLogin.cpp
        NavigationLogin.h
        NavigationLogin.ui
)

include_directories(.)

target_link_libraries(
        ${PROJECT_NAME}
        PRIVATE
        Qt5::Core Qt5::Widgets Qt5::Gui

        NeteaseComponents
        NeteaseNetwork
)

target_include_directories(${PROJECT_NAME} INTERFACE .)