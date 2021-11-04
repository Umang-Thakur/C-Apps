#ifndef SAUCE_HPP
#define SAUCE_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Sauce
        {
        public:
            virtual std::string toString() = 0;
        };

    } // namespace Abstract
} // namespace Factory

#endif