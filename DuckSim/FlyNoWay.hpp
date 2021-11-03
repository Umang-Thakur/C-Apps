#ifndef FLY_NO_WAY_HPP
#define FLY_NO_WAY_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class FlyNoWay : public FlyBehaviour
    {
    public:
        virtual void fly()
        {
            cout << "I can't fly" << endl;
        }
    };
}

#endif