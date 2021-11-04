#ifndef REGGIANO_CHEESE_HPP
#define REGGIANO_CHEESE_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class ReggianoCheese : public Cheese
        {
        public:
            virtual std::string toString()
            {
                return "Reggiano Cheese";
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif