#ifndef PIZZA_INGREDIENT_FACTORY
#define PIZZA_INGREDIENT_FACTORY

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class PizzaIngredientFactory
        {
        public:
            virtual Dough *createDough() = 0;

            virtual Sauce *createSauce() = 0;

            virtual Cheese *createCheese() = 0;

            virtual std::vector<Veggies *> createVeggies() = 0;

            virtual Pepperoni *createPepperoni() = 0;

            virtual Clams *createClam() = 0;
        };

    } // namespace Abstract
} // namespace Factory

#endif