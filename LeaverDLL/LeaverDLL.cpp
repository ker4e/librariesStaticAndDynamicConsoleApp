#include <iostream>
#include "LeaverDLL.h"

std::string secretLeaver::Leaver::leave(std::string name)
{
	return "Bye, " + name + '\n';
}

void secretLeaver::Leaver::leaver(std::string_view name)
{
	std::cout << "Bye, " << name << std::endl;
}