#include <iostream>
#include <string>

#include "Greeter.h"
#include "LeaverDLL.h"

int main() 
{
	std::string name{};
	std::cout << "What`s your name?" << std::endl;
	std::getline(std::cin >> std::ws, name);

	std::cout << secretGreeter::Greeter::greet(name);
	std::cout << secretLeaver::Leaver::leave(name) << std::endl;

	std::cin.get();

	secretGreeter::Greeter::greeter(name);
	secretLeaver::Leaver::leaver(name);

	std::cin.get();

	return EXIT_SUCCESS;
}