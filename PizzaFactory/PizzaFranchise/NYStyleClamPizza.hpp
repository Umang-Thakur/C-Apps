#ifndef NY_STYLE_CLAM_PIZZA
#define NY_STYLE_CLAM_PIZZA

#include "PizzaFranchise.hpp"

namespace Factory
{
    namespace Method
    {

        class NYStyleClamPizza : public Pizza
        {
        public:
            NYStyleClamPizza()
            {
                name = "NY Style Clam Pizza";
                dough = "Thin Crust Dough";
                sauce = "Marinara Sauce";
                toppings.push_back("Grated Reggiano Cheese");
                toppings.push_back("Fresh Clams from Long Island Sound");
            }
        };

    } // namespace Method
} // namespace Factory

#endif