#ifndef STATISTICS_DISPLAY_HPP
#define STATISTICS_DISPLAY_HPP

#include "../WeatherStation.hpp"

using namespace std;

namespace Observer
{
    class StatisticsDisplay : public DisplayElement, public Observer
    {
    private:
        float maxTemp;

    private:
        float minTemp;

    private:
        float tempSum;

    private:
        int numReadings;

    private:
        Subject *weatherData;

    public:
        StatisticsDisplay(Subject *weatherData) : maxTemp(0), minTemp(200.0F), tempSum(0), numReadings(0)
        {
            this->weatherData = weatherData;
            weatherData->registerObserver(this);
        }

    public:
        virtual void update(float temperature, float humidity, float pressure)
        {
            tempSum += temperature;
            numReadings++;

            if (temperature > maxTemp)
            {
                maxTemp = temperature;
            }

            if (temperature < minTemp)
            {
                minTemp = temperature;
            }

            display();
        }

    public:
        virtual void display()
        {
            cout.setf(ios::showpoint);
            cout.precision(3);
            cout << "Avg/Max/Min temperature = "
                 << (tempSum / numReadings) << "/" << maxTemp << "/" << minTemp
                 << endl;
        }
    };
}

#endif