#pragma once

#ifdef IDENTITY_THEFT_DLL
#   ifdef _WINDLL
#       define IDENTITY_THEFT_API __declspec(dllexport)
#   else
#       define IDENTITY_THEFT_API __declspec(dllimport)
#   endif
#else
#   define IDENTITY_THEFT_API
#endif

extern void IDENTITY_THEFT_API dummy();