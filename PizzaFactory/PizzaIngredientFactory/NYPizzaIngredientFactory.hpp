#ifndef PIZZA_INGREDIENT_FACTORY_HPP
#define PIZZA_INGREDIENT_FACTORY_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class NYPizzaIngredientFactory : public PizzaIngredientFactory
        {

        public:
            virtual Dough *createDough()
            {
                return new ThinCrustDough();
            }

            virtual Sauce *createSauce()
            {
                return new MarinaraSauce();
            }

            virtual Cheese *createCheese()
            {
                return new ReggianoCheese();
            }

            virtual std::vector<Veggies *> createVeggies()
            {
                std::vector<Veggies *> veggies;
                veggies.push_back(new Garlic());
                veggies.push_back(new Onion());
                veggies.push_back(new Mushroom());
                veggies.push_back(new RedPepper());
                return veggies;
            }

            virtual Pepperoni *createPepperoni()
            {
                return new SlicedPepperoni();
            }

            virtual Clams *createClam()
            {
                return new FreshClams();
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif