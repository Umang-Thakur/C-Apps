#ifndef HEAT_INDEX_DISPLAY_HPP
#define HEAT_INDEX_DISPLAY_HPP

#include "../WeatherStation.hpp"

using namespace std;

namespace Observer
{
    class HeatIndexDisplay : public DisplayElement, public Observer
    {

    private:
        float heatIndex;

    private:
        Subject *weatherData;

    public:
        HeatIndexDisplay(Subject *weatherData) : heatIndex(0)
        {
            this->weatherData = weatherData;
            weatherData->registerObserver(this);
        }

    public:
        virtual void update(float temperature, float humidity, float pressure)
        {
            heatIndex = computeHeatIndex(temperature, humidity);
            display();
        }

    private:
        virtual float computeHeatIndex(float t, float rh)
        {
            float index = (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) + (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) + (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
                                   (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 * (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
                                   (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
                                   0.000000000843296 * (t * t * rh * rh * rh)) -
                                  (0.0000000000481975 * (t * t * t * rh * rh * rh)));
            return index;
        }

    public:
        virtual void display()
        {
            std::cout.setf(std::ios::showpoint);
            std::cout.precision(7);
            std::cout << "Heat index is " << heatIndex << std::endl;
        }
    };
}

#endif