#include "WeatherStation.hpp"

using namespace Observer;

int main(int argc, char *argv[])
{
    WeatherData *weatherData = new WeatherData();

    CurrentConditionsDisplay *currentDisplay = new CurrentConditionsDisplay(weatherData);
    StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);
    ForeCastDisplay *forecastDisplay = new ForeCastDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4f);
    weatherData->setMeasurements(82, 70, 29.2f);
    weatherData->setMeasurements(78, 90, 29.2f);

    return 0;
}