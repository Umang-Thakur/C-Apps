#ifndef SLICED_PEPPERONI_HPP
#define SLICED_PEPPERONI_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class SlicedPepperoni : public Pepperoni
        {
        public:
            virtual std::string toString()
            {
                return "Sliced Pepperoni";
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif