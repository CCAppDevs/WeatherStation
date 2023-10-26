#pragma once
#include "IObserver.h"

class IWeatherSubject
{
public:
	virtual void Register(IObserver& obs) = 0;
	virtual void Unregister(IObserver& obs) = 0;
	virtual void Notify() = 0;
};

