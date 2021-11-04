#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class Espresso : public Beverage
    {
    public:
        Espresso()
        {
            description = "Espresso";
        }

        virtual double cost()
        {
            return 1.99;
        }
    };

} // namespace Decorator

#endif