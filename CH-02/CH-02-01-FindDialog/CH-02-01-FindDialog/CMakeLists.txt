cmake_minimum_required(VERSION 3.14)

project(CH-02-01-FindDialog LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_executable(CH-02-01-FindDialog
  main.cpp
  finddialog.h
  finddialog.cpp
)
target_link_libraries(CH-02-01-FindDialog Qt${QT_VERSION_MAJOR}::Widgets)

install(TARGETS CH-02-01-FindDialog
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
