#ifndef SIMPLE_FACTORY_HPP
#define SIMPLE_FACTORY_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Simple
    {
        class SimplePizzaFactory
        {

        public:
            virtual Pizza *createPizza(std::string type)
            {
                Pizza *pizza = 0;
                if (type.compare("cheese") == 0)
                {
                    pizza = new CheesePizza();
                }
                else if (type.compare("pepperoni") == 0)
                {
                    pizza = new PepperoniPizza();
                }
                else if (type.compare("clam") == 0)
                {
                    pizza = new ClamPizza();
                }
                else if (type.compare("veggie") == 0)
                {
                    pizza = new VeggiePizza();
                }
                return pizza;
            }
        };
    } // namespace Simple

} // namespace Factory

#endif