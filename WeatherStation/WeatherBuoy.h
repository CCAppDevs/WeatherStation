#pragma once
#include "IWeatherSubject.h"
#include <vector>

class WeatherBuoy :
    public IWeatherSubject
{
private:
    std::vector<IObserver*> Observers;
    double CurrentTemp;

public:
    WeatherBuoy();

    void Register(IObserver& obs);
    void Unregister(IObserver& obs);
    void Notify();
};

