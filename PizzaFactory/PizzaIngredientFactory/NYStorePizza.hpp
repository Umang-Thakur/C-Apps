#ifndef NY_STORE_PIZZA_HPP
#define NY_STORE_PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class NYPizzaStore : public PizzaStore
        {
        public:
            Pizza *createPizza(std::string item)
            {
                Pizza *pizza = 0;
                PizzaIngredientFactory *ingredientFactory =
                    new NYPizzaIngredientFactory();

                if (item.compare("cheese") == 0)
                {

                    pizza = new CheesePizza(ingredientFactory);
                    pizza->setName("New York Style Cheese Pizza");
                }
                else if (item.compare("veggie") == 0)
                {

                    pizza = new VeggiePizza(ingredientFactory);
                    pizza->setName("New York Style Veggie Pizza");
                }
                else if (item.compare("clam") == 0)
                {

                    pizza = new ClamPizza(ingredientFactory);
                    pizza->setName("New York Style Clam Pizza");
                }
                else if (item.compare("pepperoni") == 0)
                {

                    pizza = new PepperoniPizza(ingredientFactory);
                    pizza->setName("New York Style Pepperoni Pizza");
                }
                return pizza;
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif