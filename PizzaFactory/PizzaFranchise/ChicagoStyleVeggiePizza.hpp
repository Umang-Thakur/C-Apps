#ifndef CHICAGO_STYLE_VEGGIE_PIZZA_HPP
#define CHICAGO_STYLE_VEGGIE_PIZZA_HPP

#include "PizzaFranchise.hpp"

namespace Factory
{
    namespace Method
    {

        class ChicagoStyleVeggiePizza : public Pizza
        {
        public:
            ChicagoStyleVeggiePizza()
            {
                name = "Chicago Deep Dish Veggie Pizza";
                dough = "Extra Thick Crust Dough";
                sauce = "Plum Tomato Sauce";

                toppings.push_back("Shredded Mozzarella Cheese");
                toppings.push_back("Black Olives");
                toppings.push_back("Spinach");
                toppings.push_back("Eggplant");
            }
            virtual void cut()
            {
                std::cout << "Cutting the pizza into square slices" << std::endl;
            }
        };

    } // namespace Method
} // namespace Factory

#endif