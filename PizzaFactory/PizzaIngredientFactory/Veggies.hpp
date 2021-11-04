#ifndef VEGGIES_HPP
#define VEGGIES_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Veggies
        {
        public:
            virtual std::string toString() = 0;
        };

    } // namespace Abstract
} // namespace Factory

#endif