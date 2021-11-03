#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Simple
    {
        class Pizza
        {
        protected:
            std::string name;
            std::string dough;
            std::string sauce;
            std::list<std::string> toppings;

        public:
            virtual std::string getName()
            {
                return name;
            }

            virtual void prepare()
            {
                std::cout << "Preparing " << name.c_str() << std::endl;
            }

            virtual void bake()
            {
                std::cout << "Baking " << name.c_str() << std::endl;
            }

            virtual void cut()
            {
                std::cout << "Cutting " << name.c_str() << std::endl;
            }

            virtual void box()
            {
                std::cout << "Boxing " << name.c_str() << std::endl;
            }

            virtual std::string toString()
            {
                // code to display pizza name and ingredients
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
    } // namespace Simple

} // namespace Factory

#endif