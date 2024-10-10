cmake_minimum_required(VERSION 3.27.7)
project(FlappyBirdQt)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)



set(CMAKE_PREFIX_PATH "D:/Qt/6.7.0/mingw_64")
find_package(Qt6 COMPONENTS Widgets REQUIRED)





add_executable(
    ${PROJECT_NAME}
    assets/resources.qrc
    main.cpp
    src/scene.cpp
    src/widget.cpp
    src/pillaritem.cpp
)
target_include_directories(${PROJECT_NAME} PRIVATE src)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)
