#ifndef CHICAGO_PIZZA_STORE_HPP
#define CHICAGO_PIZZA_STORE_HPP

#include "PizzaFranchise.hpp"

namespace Factory
{
    namespace Method
    {

        class ChicagoPizzaStore : public PizzaStore
        {
        public:
            virtual Pizza *createPizza(std::string type)
            {
                if (type.compare("cheese") == 0)
                {
                    return new ChicagoStyleCheesePizza();
                }
                else if (type.compare("veggie") == 0)
                {
                    return new ChicagoStyleVeggiePizza();
                }
                else if (type.compare("clam") == 0)
                {
                    return new ChicagoStyleClamPizza();
                }
                else if (type.compare("pepperoni") == 0)
                {
                    return new ChicagoStylePepperoniPizza();
                }
                else
                    return 0;
            }
        };

    } // namespace Method
} // namespace Factory

#endif