#ifndef FLY_BEHAVIOUR_HPP
#define FLY_BEHAVIOUR_HPP

#include "MiniDuckSim.hpp"

namespace MiniDuckApp
{

    class FlyBehaviour
    {
    public:
        virtual void fly() = 0;
    };
}

#endif