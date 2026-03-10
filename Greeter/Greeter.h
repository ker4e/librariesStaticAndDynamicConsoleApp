#ifndef GREETER_H
#define GREETER_H

namespace secretGreeter
{
	class Greeter {
	public:
		static std::string greet(std::string name);
		static void greeter(std::string_view name);
	};
}

#endif
