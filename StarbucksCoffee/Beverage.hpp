#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class Beverage
    {
    protected:
        std::string description;

        Beverage() : description("Unknown Beverage")
        {
        }

    public:
        virtual std::string getDescription()
        {
            return description;
        }

        virtual double cost() = 0;
    };

} // namespace Decorator

#endif