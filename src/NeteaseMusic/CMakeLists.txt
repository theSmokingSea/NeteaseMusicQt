project(NeteaseMusic)

add_executable(${PROJECT_NAME}
    main.cpp
    resources.qrc
)

target_link_libraries(
        ${PROJECT_NAME}
        Qt5::Core Qt5::Widgets Qt5::Gui  Qt5::Network
        NeteaseGui
)

deployqt_qt_runtime(${PROJECT_NAME} ${qt_required_components})