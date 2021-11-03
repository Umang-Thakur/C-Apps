#ifndef NY_STYLE_CHEESE_PIZZA
#define NY_STYLE_CHEESE_PIZZA

#include "PizzaFranchise.hpp"

namespace Factory
{
    namespace Method
    {

        class NYStyleCheesePizza : public Pizza
        {
        public:
            NYStyleCheesePizza()
            {
                name = "NY Style Sauce and Cheese Pizza";
                dough = "Thin Crust Dough";
                sauce = "Marinara Sauce";
                toppings.push_back("Grated Reggiano Cheese");
            }
        };

    } // namespace Method
} // namespace Factory

#endif