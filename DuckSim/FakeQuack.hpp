#ifndef FAKE_QUACK_HPP
#define FAKE_QUACK_HPP

#include "MiniDuckSim.hpp"

using namespace std;

namespace MiniDuckApp
{
    class FakeQuack : public QuackBehaviour
    {
    public:
        virtual void quack()
        {
            cout << "Qwak" << endl;
        }
    };
}

#endif