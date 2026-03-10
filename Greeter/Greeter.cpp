#include <iostream>
#include "Greeter.h"

std::string secretGreeter::Greeter::greet(std::string name)
{
	 return "Hello, " + name + '\n';
}

void secretGreeter::Greeter::greeter(std::string_view name)
{
	std::cout << "Hello, " << name << std::endl;
}