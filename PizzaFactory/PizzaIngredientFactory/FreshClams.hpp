#ifndef FRESH_CLAMS_HPP
#define FRESH_CLAMS_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class FreshClams : public Clams
        {
        public:
            virtual std::string toString()
            {
                return "Fresh Clams from Long Island Sound";
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif