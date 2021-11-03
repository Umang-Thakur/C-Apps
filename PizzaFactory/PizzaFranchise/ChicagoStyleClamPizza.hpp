#ifndef CHICAGO_STYLE_CLAM_PIZZA_HPP
#define CHICAGO_STYLE_CLAM_PIZZA_HPP

#include "PizzaFranchise.hpp"

namespace Factory
{
    namespace Method
    {

        class ChicagoStyleClamPizza : public Pizza
        {
        public:
            ChicagoStyleClamPizza()
            {
                name = "Chicago Style Clam Pizza";
                dough = "Extra Thick Crust Dough";
                sauce = "Plum Tomato Sauce";

                toppings.push_back("Shredded Mozzarella Cheese");
                toppings.push_back("Frozen Clams from Chesapeake Bay");
            }
            virtual void cut()
            {
                std::cout << "Cutting the pizza into square slices" << std::endl;
            }
        };

    } // namespace Method
} // namespace Factory

#endif