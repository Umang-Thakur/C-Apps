#ifndef CLAM_PIZZA_HPP
#define CLAM_PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Simple
    {

        class ClamPizza : public Pizza
        {
        public:
            ClamPizza()
            {
                name = "Cheese Pizza";
                dough = "Regular Crust";
                sauce = "Marinara Pizza Sauce";
                toppings.push_back("Shredded Mozzarella");
                toppings.push_back("Parmesan");
            }
        };

    } // namespace Simple
} // namespace Factory

#endif