#ifndef GARAGE_DOOR_HPP
#define GARAGE_DOOR_HPP

#include "SimpleRemote.hpp"

namespace SimpleRemote
{
    class GarageDoor
    {
    public:
        GarageDoor() {}

        virtual void up()
        {
            std::cout << "Garage Door is Open" << std::endl;
        }

        virtual void down()
        {
            std::cout << "Garage Door is Down" << std::endl;
        }
        virtual void stop()
        {
            std::cout << "Garage Door is Stopped" << std::endl;
        }
        virtual void lightsOn()
        {
            std::cout << "Garage Lights is On" << std::endl;
        }
        virtual void lightsOff()
        {
            std::cout << "Garage Lights is Off" << std::endl;
        }
    };
} // namespace SimpleRemote

#endif