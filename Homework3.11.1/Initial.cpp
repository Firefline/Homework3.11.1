#include "Initial.h"

void Greeter::greet(std::string name)
{
	this->name = name;
	std::cout << "Здравствуйте, " << name << " !" << std::endl;
}