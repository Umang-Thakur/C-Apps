#ifndef DISPLAY_ELEMENT_HPP
#define DISPLAY_ELEMENT_HPP

#include "../WeatherStation.hpp"

namespace Observer
{
    class DisplayElement
    {
    public:
        virtual void display() = 0;
    };
}

#endif