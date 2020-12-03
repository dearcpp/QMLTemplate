set(QML_TEMPLATE_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

find_package(Qt5 COMPONENTS Qml REQUIRED)
find_package(Qt5 COMPONENTS Quick REQUIRED)
find_package(Qt5 COMPONENTS QuickControls2 REQUIRED)

file(GLOB_RECURSE QML_TEMPLATE_SRC_FILES "${QML_TEMPLATE_SRC_DIR}/*.cpp")
file(GLOB_RECURSE QML_TEMPLATE_RCC_FILES "${QML_TEMPLATE_SRC_DIR}/*.qrc")

qt5_add_resources(QML_TEMPLATE_RCC_FILES ${QML_TEMPLATE_RCC_FILES})

set(CMAKE_AUTOMOC ON)

add_executable(QMLTemplate ${QML_TEMPLATE_SRC_FILES} ${QML_TEMPLATE_RCC_FILES})

target_link_libraries(QMLTemplate Qt5::Core Qt5::Widgets Qt5::Qml Qt5::Quick Qt5::QuickControls2)
target_include_directories(QMLTemplate PRIVATE ${QML_TEMPLATE_SRC_DIR})
