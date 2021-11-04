#ifndef VEGGIE_PIZZA_HPP
#define VEGGIE_PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class VeggiePizza : public Pizza
        {
        private:
            PizzaIngredientFactory *ingredientFactory;

        public:
            VeggiePizza(PizzaIngredientFactory *ingredientFactory)
            {
                this->ingredientFactory = ingredientFactory;
            }

            virtual void prepare()
            {
                std::cout << "Preparing " << getName().c_str() << std::endl;
                dough = ingredientFactory->createDough();
                sauce = ingredientFactory->createSauce();
                cheese = ingredientFactory->createCheese();
                veggies = ingredientFactory->createVeggies();
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif