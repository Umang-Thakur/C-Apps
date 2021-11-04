#ifndef CLAMS_PIZZA_HPP
#define CLAMS_PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class ClamPizza : public Pizza
        {
        private:
            PizzaIngredientFactory *ingredientFactory;

        public:
            ClamPizza(PizzaIngredientFactory *ingredientFactory)
            {
                this->ingredientFactory = ingredientFactory;
            }

        public:
            void virtual prepare()
            {
                std::cout << "Preparing " << getName().c_str() << std::endl;
                dough = ingredientFactory->createDough();
                sauce = ingredientFactory->createSauce();
                cheese = ingredientFactory->createCheese();
                clam = ingredientFactory->createClam();
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif
