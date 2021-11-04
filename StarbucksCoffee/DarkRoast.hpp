#ifndef DARK_ROAST_HPP
#define DARK_ROAST_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class DarkRoast : public Beverage
    {
    public:
        DarkRoast()
        {
            description = "Dark Roast Coffee";
        }

        virtual double cost()
        {
            return 0.99;
        }
    };

} // namespace Decorator

#endif