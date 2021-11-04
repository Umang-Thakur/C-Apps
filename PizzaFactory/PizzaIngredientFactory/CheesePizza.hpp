#ifndef CHEESE_PIZZA_HPP
#define CHEESE_PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class CheesePizza : public Pizza
        {
        private:
            PizzaIngredientFactory *ingredientFactory;

        public:
            CheesePizza(PizzaIngredientFactory *ingredientFactory)
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
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif