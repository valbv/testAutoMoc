#pragma once

#if defined (_MSC_VER)

#pragma warning(disable : 4251)
#pragma warning(disable : 4275)

#ifdef myDll_EXPORTS
	#define MYDLL_API __declspec(dllexport)
#else
	#define MYDLL_API __declspec(dllimport)
#endif

#endif
