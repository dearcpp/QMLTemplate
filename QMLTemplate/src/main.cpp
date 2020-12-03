#include "core/launcher/launcher.hpp"

#include <QApplication>
#include <QQmlApplicationEngine>

#include "application/ui/manager.hpp"

int main(int argc, char *argv[]) {
    const auto launcher = Core::Launcher::Create(argc, argv);
    return launcher ? launcher->exec() : 1;
}
