#ifndef SQUEAK_HPP
#define SQUEAK_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class Squeak : public QuackBehaviour
    {
    public:
        virtual void quack()
        {
            cout << "Squeak" << endl;
        }
    };
}

#endif