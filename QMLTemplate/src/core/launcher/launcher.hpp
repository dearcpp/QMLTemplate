#ifndef _CORE_LAUNCHER_LAUNCHER_HPP
#define _CORE_LAUNCHER_LAUNCHER_HPP

# include "core/defines.hpp"
# include <memory>

CORE_BEGIN_NAMESPACE

class Launcher
{
public:

    Launcher(int argc, char *argv[]);

    static std::unique_ptr<Launcher> Create(int argc, char *argv[]);

    int exec();

protected:

    struct arguments
    {
        int argc;
        char **argv;

        arguments(int argc, char *argv[]) : argc(argc), argv(argv) { }
    } _arguments;

};

CORE_END_NAMESPACE

#endif // _CORE_LAUNCHER_LAUNCHER_HPP
