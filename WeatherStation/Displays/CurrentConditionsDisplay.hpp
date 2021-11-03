#ifndef CURRENT_CONDITIONS_DISPLAY_HPP
#define CURRENT_CONDITIONS_DISPLAY_HPP

#include "../WeatherStation.hpp"

using namespace std;

namespace Observer
{
    class CurrentConditionsDisplay : public DisplayElement, public Observer
    {
    private:
        float temperature;

    private:
        float humidity;

    private:
        Subject *weatherData;

    public:
        CurrentConditionsDisplay(Subject *weatherData)
        {
            this->weatherData = weatherData;
            weatherData->registerObserver(this);
        }

    public:
        virtual void update(float temperature, float humidity, float pressure)
        {
            this->temperature = temperature;
            this->humidity = humidity;
            display();
        }

    public:
        virtual void display()
        {
            cout.setf(ios::showpoint);
            cout.precision(3);
            cout << "Current Conditions : " << temperature
                 << " F degrees and " << humidity << "% humidity"
                 << endl;
        }
    };
}

#endif