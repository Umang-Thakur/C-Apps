#ifndef MILK_HPP
#define MILK_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class Milk : public CondimentDecorator
    {
    private:
        Beverage *beverage;

    public:
        Milk(Beverage *beverage)
        {
            this->beverage = beverage;
        }

        virtual std::string getDescription()
        {
            return beverage->getDescription() + ", Milk";
        }

        virtual double cost()
        {
            return 0.10 + beverage->cost();
        }
    };

} // namespace Decorator

#endif