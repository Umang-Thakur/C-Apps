#ifndef HOUSE_BLEND_HPP
#define HOUSE_BLEND_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class HouseBlend : public Beverage
    {
    public:
        HouseBlend()
        {
            description = "House Blend Coffee";
        }

        virtual double cost()
        {
            return 0.89;
        }
    };

} // namespace Decorator

#endif