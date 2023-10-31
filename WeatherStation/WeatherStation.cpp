#include <iostream>
#include "WeatherBuoy.h"
#include "Ticker.h"
#include "WeatherLogger.h"
#include <fstream>


int main()
{
    WeatherBuoy weather;
    Ticker ticker1 = Ticker("Bob's News");
    Ticker ticker2 = Ticker("The Chronicle");
    WeatherLogger logger("test.txt");

    weather.Register(ticker1);
    weather.Register(ticker2);
    weather.Register(logger);

    weather.SetCurrentTemp(100.0);
    std::cout << "The weather is currently: " << weather.GetCurrentTemp() << "\n";

    weather.SetCurrentTemp(99.0);
    std::cout << "The weather is currently: " << weather.GetCurrentTemp() << "\n";

}