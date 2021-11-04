#ifndef RED_PEPPER_HPP
#define RED_PEPPER_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class RedPepper : public Veggies
        {
        public:
            virtual std::string toString()
            {
                return ("Red Pepper");
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif