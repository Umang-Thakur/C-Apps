#ifndef PEPPERONI_PIZZA_HPP
#define PEPPERONI_PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Simple
    {
        class PepperoniPizza : public Pizza
        {
        public:
            PepperoniPizza()
            {
                name = "Pepperoni Pizza";
                dough = "Crust";
                sauce = "Marinara sauce";
                toppings.push_back("Sliced Pepperoni");
                toppings.push_back("Sliced Onion");
                toppings.push_back("Grated parmesan cheese");
            }
        };
    } // namespace Simple

} // namespace Factory

#endif