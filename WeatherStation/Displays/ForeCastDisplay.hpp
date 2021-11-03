#ifndef FORECAST_DISPLAY_HPP
#define FORECAST_DISPLAY_HPP

#include "../WeatherStation.hpp"

using namespace std;

namespace Observer
{
    class ForeCastDisplay : public DisplayElement, public Observer
    {
    private:
        float currentPressure;

    private:
        float lastPressure;

    private:
        Subject *weatherData;

    public:
        ForeCastDisplay(Subject *weatherData) : currentPressure(29.2f), lastPressure(0)
        {
            this->weatherData = weatherData;
            weatherData->registerObserver(this);
        }

    public:
        virtual void update(float temperature, float humidity, float pressure)
        {
            this->lastPressure = this->currentPressure;
            this->currentPressure = pressure;
            display();
        }

    public:
        virtual void display()
        {
            cout.setf(ios::showpoint);
            cout.precision(3);
            cout << "ForeCast : ";
            if (currentPressure > lastPressure)
            {
                std::cout << "Improving weather on the way!";
            }
            else if (currentPressure == lastPressure)
            {
                std::cout << "More of the same";
            }
            else if (currentPressure < lastPressure)
            {
                std::cout << "Watch out for cooler, rainy weather";
            }
            cout << endl;
        }
    };
}

#endif