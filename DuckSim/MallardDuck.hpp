#ifndef MALLARD_DUCK_HPP
#define MALLARD_DUCK_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class MallardDuck : public Duck
    {
    public:
        MallardDuck()
        {
            quackbehaviour = new Quack();
            flyBehaviour = new FlyWithWings();
        }

    public:
        virtual void display()
        {
            cout << "I'm a real Mallard Duck." << endl;
        }
    };
}

#endif