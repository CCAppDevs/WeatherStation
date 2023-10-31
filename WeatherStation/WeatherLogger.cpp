#include "WeatherLogger.h"

WeatherLogger::WeatherLogger(std::string filename) : IObserver()
{
	this->Filename = filename;
	std::cout << "Opened weather logger at: " << filename << "\n";
}

WeatherLogger::~WeatherLogger()
{
	std::cout << "Closed file on weather logger.\n";
}

void WeatherLogger::Update(double temp)
{
	// write a line to the file recording the temp.
	std::ofstream file(this->Filename, std::ios::app);
	file << "Weather event: " << temp << "\n";
	file.close();
}
