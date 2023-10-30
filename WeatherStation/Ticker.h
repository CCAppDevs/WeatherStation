#pragma once
#include "IObserver.h"
#include <iostream>

class Ticker : public IObserver
{
private:
	std::string Name;

public:
	Ticker(std::string name);

	void Update(double temp);
};

