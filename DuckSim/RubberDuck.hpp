#ifndef RUBBER_DUCK_HPP
#define RUBBER_DUCK_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class RubberDuck : public Duck
    {
    public:
        RubberDuck()
        {
            quackbehaviour = new Squeak();
            flyBehaviour = new FlyNoWay();
        }

    public:
        virtual void display()
        {
            cout << "I'm a real Mallard Duck." << endl;
        }
    };
}

#endif