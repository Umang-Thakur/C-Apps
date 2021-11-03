#ifndef CHICAGO_STYLE_CHEESE_PIZZA_HPP
#define CHICAGO_STYLE_CHEESE_PIZZA_HPP

#include "PizzaFranchise.hpp"

namespace Factory
{
    namespace Method
    {

        class ChicagoStyleCheesePizza : public Pizza
        {
        public:
            ChicagoStyleCheesePizza()
            {
                name = "Chicago Style Deep Dish Cheese Pizza";
                dough = "Extra Thick Crust Dough";
                sauce = "Plum Tomato Sauce";
                toppings.push_back("Shredded Mozzarella Cheese");
            }
            virtual void cut()
            {
                std::cout << "Cutting the pizza into square slices" << std::endl;
            }
        };

    } // namespace Method
} // namespace Factory

#endif