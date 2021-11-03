#ifndef CHEESE_PIZZA_HPP
#define CHEESE_PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Simple
    {

        class CheesePizza : public Pizza
        {
        public:
            CheesePizza()
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