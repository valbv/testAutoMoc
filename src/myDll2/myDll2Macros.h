#pragma once

#if defined (_MSC_VER)

#pragma warning(disable : 4251)
#pragma warning(disable : 4275)

#ifdef myDll2_EXPORTS
	#define MYDLL2_API __declspec(dllexport)
#else
	#define MYDLL2_API __declspec(dllimport)
#endif

#endif
