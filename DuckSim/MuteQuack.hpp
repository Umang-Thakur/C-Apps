#ifndef MUTE_QUACK_HPP
#define MUTE_QUACK_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class MuteQuack : public QuackBehaviour
    {
    public:
        virtual void quack()
        {
            cout << " << Silence >> " << endl;
        }
    };
}

#endif