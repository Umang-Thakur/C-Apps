#ifndef FLY_WITH_WINGS_HPP
#define FLY_WITH_WINGS_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class FlyWithWings : public FlyBehaviour
    {
    public:
        virtual void fly()
        {
            cout << "I'm flying !!" << endl;
        }
    };
}

#endif