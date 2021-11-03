#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include "WeatherStation.hpp"

namespace Observer
{
    class Observer
    {
    public:
        virtual void update(float temp, float humidity, float pressure) = 0;
    };
}

#endif