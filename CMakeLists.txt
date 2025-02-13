cmake_minimum_required(VERSION 3.5)

project(DiceMagicApp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        GlobalConfig.h
        resources.qrc
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(DiceMagicApp
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        diceselectionwindow.h diceselectionwindow.cpp diceselectionwindow.ui
        playerswindow.h playerswindow.cpp playerswindow.ui
        playersnameswindow.h playersnameswindow.cpp playersnameswindow.ui

        resources.qrc
        predraw5window.h predraw5window.cpp predraw5window.ui
        predraw4window.h predraw4window.cpp predraw4window.ui
        predraw6window.h predraw6window.cpp predraw6window.ui
        predraw3window.h predraw3window.cpp predraw3window.ui
        predraw2window.h predraw2window.cpp predraw2window.ui
        predraw1window.h predraw1window.cpp predraw1window.ui
        resultwindow.h resultwindow.cpp resultwindow.ui
        GlobalConfig.h
        GlobalConfig.cpp
        randomengine.h randomengine.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET DiceMagicApp APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(DiceMagicApp SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(DiceMagicApp
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(DiceMagicApp PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.DiceMagicApp)
endif()
set_target_properties(DiceMagicApp PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS DiceMagicApp
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(DiceMagicApp)
endif()
