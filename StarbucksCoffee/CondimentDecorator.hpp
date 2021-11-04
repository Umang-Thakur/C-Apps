#ifndef CONDIMENT_DECORATOR_HPP
#define CONDIMENT_DECORATOR_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class CondimentDecorator : public Beverage
    {
    public:
        virtual std::string getDescription() = 0;
    };

} // namespace Decorator

#endif