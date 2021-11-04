#ifndef PIZZA_STORE_HPP
#define PIZZA_STORE_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class PizzaStore
        {
        public:
            virtual Pizza *createPizza(std::string type) = 0;

            virtual Pizza *orderPizza(std::string type)
            {
                Pizza *pizza = createPizza(type);
                std::cout << "--- Making a " << pizza->getName() << " ---" << std::endl;
                pizza->prepare();
                pizza->bake();
                pizza->cut();
                pizza->box();
                return pizza;
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif