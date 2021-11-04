#ifndef THIN_CRUST_DOUGH_HPP
#define THIN_CRUST_DOUGH_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class ThinCrustDough : public Dough
        {
        public:
            virtual std::string toString()
            {
                return "Thin Crust Dough";
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif
