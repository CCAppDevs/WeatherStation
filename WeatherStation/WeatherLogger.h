#pragma once
#include "IObserver.h"
#include <fstream>


class WeatherLogger :
    public IObserver
{
private:
    std::ofstream FileHandle;

public:
    WeatherLogger(std::string filename);
    void Update(double temp);
};

