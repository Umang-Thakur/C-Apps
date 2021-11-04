#ifndef ONION_HPP
#define ONION_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Onion : public Veggies
        {
        public:
            virtual std::string toString()
            {
                return ("Onion");
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif