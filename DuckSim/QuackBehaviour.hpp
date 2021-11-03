#ifndef QUACK_BEHAVIOUR_HPP
#define QUACK_BEHAVIOUR_HPP

#include "MiniDuckSim.hpp"

namespace MiniDuckApp
{
    class QuackBehaviour
    {

    public:
        virtual void quack() = 0;
    };
}

#endif