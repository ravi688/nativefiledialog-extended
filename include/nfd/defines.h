
#pragma once

#include <common/defines.h>

#ifdef NFD_STATIC_LIBRARY
#	define NFD_API
#elif NFD_DYNAMIC_LIBRARY
#	define NFD_API __declspec(dllimport)
#elif BUILD_DYNAMIC_LIBRARY
#	define NFD_API __declspec(dllexport)
#else
#	define NFD_API
#endif
