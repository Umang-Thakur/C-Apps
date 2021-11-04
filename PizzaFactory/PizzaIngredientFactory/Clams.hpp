#ifndef CLAMS_HPP
#define CLAMS_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Clams
        {
        public:
            virtual std::string toString() = 0;
        };

    } // namespace Abstract
} // namespace Factory

#endif