#ifndef GARLIC_HPP
#define GARLIC_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Garlic : public Veggies
        {
        public:
            virtual std::string toString()
            {
                return ("Garlic");
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif