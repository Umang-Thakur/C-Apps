#ifndef NY_STYLE_VEGGIE_PIZZA_PIZZA
#define NY_STYLE_VEGGIE_PIZZA_PIZZA

#include "PizzaFranchise.hpp"

namespace Factory
{
    namespace Method
    {

        class NYStyleVeggiePizza : public Pizza
        {
        public:
            NYStyleVeggiePizza()
            {
                name = "NY Style Veggie Pizza";
                dough = "Thin Crust Dough";
                sauce = "Marinara Sauce";
                toppings.push_back("Grated Reggiano Cheese");
                toppings.push_back("Garlic");
                toppings.push_back("Onion");
                toppings.push_back("Mushrooms");
                toppings.push_back("Red Pepper");
            }
        };

    } // namespace Method
} // namespace Factory

#endif