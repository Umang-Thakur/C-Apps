#ifndef PIZZA_STORE_HPP
#define PIZZA_STORE_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Simple
    {
        class PizzaStore
        {
        private:
            SimplePizzaFactory *factory;

        public:
            PizzaStore(SimplePizzaFactory *factory)
            {
                this->factory = factory;
            }

            virtual Pizza *orderPizza(std::string type)
            {
                Pizza *pizza;

                pizza = factory->createPizza(type);

                pizza->prepare();
                pizza->bake();
                pizza->cut();
                pizza->box();

                return pizza;
            }
        };

    } // namespace Simple

} // namespace Factory

#endif