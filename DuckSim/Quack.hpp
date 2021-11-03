#ifndef QUACK_HPP
#define QUACK_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class Quack : public QuackBehaviour
    {
    public:
        virtual void quack()
        {
            cout << "Quack" << endl;
        }
    };
}

#endif