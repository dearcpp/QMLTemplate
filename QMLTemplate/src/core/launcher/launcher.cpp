#include "launcher.hpp"

#include "platform/platform.hpp"
#include "application/application.hpp"

CORE_BEGIN_NAMESPACE

Launcher::Launcher(int argc, char *argv[]) : _arguments(argc, argv) { }

std::unique_ptr<Launcher> Launcher::Create(int argc, char *argv[]) {
    return std::make_unique<Platform::Launcher>(argc, argv);
}

int Launcher::exec() {
    Application application(_arguments.argc, _arguments.argv);
    return application.exec();
}

CORE_END_NAMESPACE
