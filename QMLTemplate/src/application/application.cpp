#include "application.hpp"
#include "application/ui/manager.hpp"

Application::Application(int &argc, char **argv, int) : QGuiApplication(argc, argv), QmlEngine() {
    qmlRegisterType<UiManager>("io.qt.UiManager", 1, 0, "UiManager");
    QmlEngine.load(":/qml/application.qml");
}
