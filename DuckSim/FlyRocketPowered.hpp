#ifndef FLY_ROCKET_POWERED
#define FLY_ROCKET_POWERED

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class FlyRocketPowered : public FlyBehaviour
    {
    public:
        virtual void fly()
        {
            cout << "I'm flying with a Rocket !!" << endl;
        }
    };
}

#endif