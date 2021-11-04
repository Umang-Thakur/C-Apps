#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class Mocha : public CondimentDecorator
    {
    private:
        Beverage *beverage;

    public:
        Mocha(Beverage *beverage)
        {
            this->beverage = beverage;
        }

        virtual std::string getDescription()
        {
            return beverage->getDescription() + ", Mocha";
        }

        virtual double cost()
        {
            return 0.20 + beverage->cost();
        }
    };

} // namespace Decorator

#endif