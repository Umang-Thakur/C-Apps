#ifndef DE_CAF_HPP
#define DE_CAF_HPP

#include "Coffee.hpp"

namespace Decorator
{

    class Decaf : public Beverage
    {
    public:
        Decaf()
        {
            description = "Decaf Coffee";
        }

        virtual double cost()
        {
            return 1.05;
        }
    };

} // namespace Decorator

#endif