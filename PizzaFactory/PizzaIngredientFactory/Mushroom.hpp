#ifndef MUSHROOM_HPP
#define MUSHROOM_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Mushroom : public Veggies
        {
        public:
            virtual std::string toString()
            {
                return ("Mushrooms");
            }
        };
    }
}

#endif