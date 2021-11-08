#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "SimpleRemote.hpp"

namespace SimpleRemote
{
    class Light
    {

    public:
        Light() {}
        virtual void on()
        {
            std::cout << "Light is on" << std::endl;
        }

        virtual void off()
        {
            std::cout << "Light is off" << std::endl;
        }
    };
} // namespace SimpleRemote

#endif