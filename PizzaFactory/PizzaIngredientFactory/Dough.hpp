#ifndef DOUGH_HPP
#define DOUGH_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Dough
        {
        public:
            virtual std::string toString() = 0;
        };

    } // namespace Abstract
} // namespace Factory

#endif