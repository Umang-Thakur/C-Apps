#ifndef MARINARA_SAUCE_HPP
#define MARINARA_SAUCE_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class MarinaraSauce : public Sauce
        {
        public:
            virtual std::string toString()
            {
                return "Marinara Sauce";
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif