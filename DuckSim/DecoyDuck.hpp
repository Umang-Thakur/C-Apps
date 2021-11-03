#ifndef DECOY_DUCK_HPP
#define DECOY_DUCK_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class DecoyDuck : public Duck
    {
    public:
        DecoyDuck()
        {
            quackbehaviour = new FakeQuack();
            flyBehaviour = new FlyNoWay();
        }

    public:
        virtual void display()
        {
            cout << "I'm a duck Decoy" << endl;
        }
    };
}

#endif