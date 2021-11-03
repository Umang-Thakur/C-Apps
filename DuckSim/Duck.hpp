#ifndef DUCK_HPP
#define DUCK_HPP

#include "MiniDuckSim.hpp"

namespace MiniDuckApp
{

    class Duck
    {
    protected:
        FlyBehaviour *flyBehaviour;

    protected:
        QuackBehaviour *quackbehaviour;

    protected:
        Duck() : flyBehaviour(0), quackbehaviour(0)
        {
        }

    public:
        virtual void setFlyBehavior(FlyBehaviour *fb)
        {
            flyBehaviour = fb;
        }

    public:
        virtual void setQuackBehavior(QuackBehaviour *qb)
        {
            quackbehaviour = qb;
        }

    public:
        virtual void performFly()
        {
            flyBehaviour->fly();
        }

    public:
        virtual void performQuack()
        {
            quackbehaviour->quack();
        }

    public:
        virtual void swim()
        {
            std::cout << "All ducks float, even decoys !" << std::endl;
        }

    public:
        virtual void display() = 0;
    };
}

#endif