#ifndef SOY_HPP
#define SOY_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class Soy : public CondimentDecorator
    {
    private:
        Beverage *beverage;

    public:
        Soy(Beverage *beverage)
        {
            this->beverage = beverage;
        }

        virtual std::string getDescription()
        {
            return beverage->getDescription() + ", Soy";
        }

        virtual double cost()
        {
            return 0.15 + beverage->cost();
        }
    };

} // namespace Decorator

#endif