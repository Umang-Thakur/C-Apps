#ifndef PEPPERONI_HPP
#define PEPPERONI_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Pepperoni
        {
        public:
            virtual std::string toString() = 0;
        };

    } // namespace Abstract
} // namespace Factory

#endif