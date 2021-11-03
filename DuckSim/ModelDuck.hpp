#ifndef MODEL_DUCK_HPP
#define MODEL_DUCK_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class ModelDuck : public Duck
    {
    public:
        ModelDuck()
        {
            quackbehaviour = new Quack();
            flyBehaviour = new FlyNoWay();
        }

    public:
        virtual void display()
        {
            cout << "I'm a model Duck." << endl;
        }
    };
}

#endif