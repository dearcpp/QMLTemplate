#ifndef _PLATFORM_PLATFORM_HPP
#define _PLATFORM_PLATFORM_HPP

# include <QtGlobal>

# if defined(Q_OS_LINUX)
#  include "linux/launcher.hpp"
# elif defined(Q_OS_WINDOWS)
#  include "windows/launcher.hpp"
# else
#  error This platform is not supported yet
# endif

#endif // _PLATFORM_PLATFORM_HPP
