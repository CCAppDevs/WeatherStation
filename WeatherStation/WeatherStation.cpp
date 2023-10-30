#include <iostream>
#include "WeatherBuoy.h"
#include "Ticker.h"

int main()
{
    WeatherBuoy weather;
    Ticker ticker1 = Ticker("Bob's News");
    Ticker ticker2 = Ticker("The Chronicle");

    weather.Register(ticker1);
    weather.Register(ticker2);

    weather.SetCurrentTemp(100.0);
    std::cout << "The weather is currently: " << weather.GetCurrentTemp() << "\n";

    weather.SetCurrentTemp(99.0);
    std::cout << "The weather is currently: " << weather.GetCurrentTemp() << "\n";

}