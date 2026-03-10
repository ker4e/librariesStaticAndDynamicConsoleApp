#ifndef LEAVERDLL_H
#define LEAVERDLL_H

#ifdef LEAVERDLL_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif

namespace secretLeaver
{
	class LEAVER_API Leaver {
	public:
		static std::string leave(std::string name);
		static void leaver(std::string_view name);
	};
}

#endif
