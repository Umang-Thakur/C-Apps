#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "PizzaFranchise.hpp"

namespace Factory
{
    namespace Method
    {
        class Pizza
        {

        protected:
            std::string name;
            std::string dough;
            std::string sauce;
            std::list<std::string> toppings;

        public:
            virtual void prepare()
            {
                std::cout << "Preparing " << name.c_str() << std::endl;
                std::cout << "Tossing dough..." << std::endl;
                std::cout << "Adding sauce..." << std::endl;
                std::cout << "Adding toppings: " << std::endl;
                for (std::list<std::string>::iterator it = toppings.begin(); toppings.end() != it; ++it)
                {
                    std::cout << "   " << it->c_str() << std::endl;
                }
            }

            virtual void bake()
            {
                std::cout << "Bake for 25 minutes at 350" << std::endl;
            }

            virtual void cut()
            {
                std::cout << "Cutting the pizza into diagonal slices" << std::endl;
            }

            virtual void box()
            {
                std::cout << "Place pizza in official PizzaStore box" << std::endl;
            }

            virtual std::string getName()
            {
                return name;
            }

            virtual std::string toString()
            {
                std::stringstream display;
                display << "---- " << name.c_str() << " ----" << std::endl;
                display << dough.c_str() << std::endl;
                display << sauce.c_str() << std::endl;
                for (std::list<std::string>::iterator it = toppings.begin(); toppings.end() != it; ++it)
                {
                    display << it->c_str() << std::endl;
                }
                return display.str();
            }
        };
    } // namespace Method

} // namespace Factory

#endif