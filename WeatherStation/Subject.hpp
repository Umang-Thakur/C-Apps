#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "WeatherStation.hpp"

namespace Observer
{
    class Subject
    {
    public:
        virtual void registerObserver(Observer *o) = 0;

    public:
        virtual void removeObserver(Observer *o) = 0;

    public:
        virtual void notifyObservers() = 0;
    };
}

#endif