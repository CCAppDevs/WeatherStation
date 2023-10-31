#pragma once
#include "IObserver.h"
#include <fstream>
#include <iostream>


class WeatherLogger :
    public IObserver
{
private:
    std::string Filename;

public:
    // constructor
    WeatherLogger(std::string filename);

    // destructor
    ~WeatherLogger();

    void Update(double temp);
};

