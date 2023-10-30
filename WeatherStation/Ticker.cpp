#include "Ticker.h"

Ticker::Ticker(std::string name)
{
	this->Name = name;
}

void Ticker::Update(double temp)
{
	// process a received update
	std::cout << this->Name << " has received an update. The weather is: " << temp << "\n";
}
