#ifndef NY_PIZZA_STORE_HPP
#define NY_PIZZA_STORE_HPP

#include "PizzaFranchise.hpp"

namespace Factory
{
    namespace Method
    {

        class NYPizzaStore : public PizzaStore
        {
        public:
            virtual Pizza *createPizza(std::string type)
            {
                if (type.compare("cheese") == 0)
                {
                    return new NYStyleCheesePizza();
                }
                else if (type.compare("veggie") == 0)
                {
                    return new NYStyleVeggiePizza();
                }
                else if (type.compare("clam") == 0)
                {
                    return new NYStyleClamPizza();
                }
                else if (type.compare("pepperoni") == 0)
                {
                    return new NYStylePepperoniPizza();
                }
                else
                    return 0;
            }
        };

    } // namespace Method
} // namespace Factory

#endif