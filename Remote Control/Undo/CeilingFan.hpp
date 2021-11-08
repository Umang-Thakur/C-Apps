#ifndef CEILING_FAN_HPP
#define CEILING_FAN_HPP

#include "Undo.hpp"

namespace Undo
{
    enum MODE
    {
        HIGH,
        MEDIUM,
        LOW,
        OFF
    };

    class CeilingFan
    {
    private:
        std::string location;
        int speed;

    public:
        CeilingFan(std::string location)
        {
            this->location = location;
            speed = OFF;
        }

        virtual void high()
        {
            speed = HIGH;
            std::cout << location.c_str() << "'s ceiling Fan is in High Mode." << std::endl;
        }

        virtual void medium()
        {
            speed = MEDIUM;
            std::cout << location.c_str() << "'s ceiling Fan is in Medium Mode." << std::endl;
        }
        virtual void low()
        {
            speed = LOW;
            std::cout << location.c_str() << "'s ceiling Fan is in Low Mode." << std::endl;
        }
        virtual void off()
        {
            speed = OFF;
            std::cout << location.c_str() << "'s ceiling Fan is in Off Mode." << std::endl;
        }

        virtual int getSpeed()
        {
            return speed;
        }
    };
} // namespace Undo

#endif