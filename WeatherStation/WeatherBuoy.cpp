#include "WeatherBuoy.h"

WeatherBuoy::WeatherBuoy()
{

}

void WeatherBuoy::Register(IObserver& obs)
{
	this->Observers.push_back(&obs);
}

void WeatherBuoy::Unregister(IObserver& obs)
{
	auto index = std::find(this->Observers.begin(), this->Observers.end(), &obs);
	this->Observers.erase(index);
}

void WeatherBuoy::Notify()
{
	for (auto obs : this->Observers) {
		obs->Update(GetCurrentTemp());
	}
}

void WeatherBuoy::SetCurrentTemp(double temp)
{
	this->CurrentTemp = temp;
	Notify();
}
