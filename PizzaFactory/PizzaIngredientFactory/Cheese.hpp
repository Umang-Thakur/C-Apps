#ifndef CHEESE_HPP
#define CHEESE_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Cheese
        {
        public:
            virtual std::string toString() = 0;
        };

    } // namespace Abstract
} // namespace Factory

#endif