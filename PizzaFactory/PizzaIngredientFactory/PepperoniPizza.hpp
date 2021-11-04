#ifndef PEPPERONI_PIZZA_HPP
#define PEPPERONI_PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class PepperoniPizza : public Pizza
        {
        private:
            PizzaIngredientFactory *ingredientFactory;

        public:
            PepperoniPizza(PizzaIngredientFactory *ingredientFactory)
            {
                this->ingredientFactory = ingredientFactory;
            }

        public:
            virtual void prepare()
            {
                std::cout << "Preparing " << getName().c_str() << std::endl;
                dough = ingredientFactory->createDough();
                sauce = ingredientFactory->createSauce();
                cheese = ingredientFactory->createCheese();
                veggies = ingredientFactory->createVeggies();
                pepperoni = ingredientFactory->createPepperoni();
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif
