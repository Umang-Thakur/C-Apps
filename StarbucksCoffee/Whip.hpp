#ifndef WHIP_HPP
#define WHIP_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class Whip : public CondimentDecorator
    {
    private:
        Beverage *beverage;

    public:
        Whip(Beverage *beverage)
        {
            this->beverage = beverage;
        }

        virtual std::string getDescription()
        {
            return beverage->getDescription() + ", Whip";
        }

        virtual double cost()
        {
            return 0.10 + beverage->cost();
        }
    };

} // namespace Decorator

#endif
