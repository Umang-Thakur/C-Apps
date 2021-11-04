#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "Pizzas.hpp"

namespace Factory
{
    namespace Abstract
    {

        class Pizza
        {
        private:
            std::string name;

        protected:
            Dough *dough;
            Sauce *sauce;
            std::vector<Veggies *> veggies;
            Cheese *cheese;
            Pepperoni *pepperoni;
            Clams *clam;

        public:
            virtual void prepare() = 0;

            Pizza() : dough(0), sauce(0), cheese(0), pepperoni(0), clam(0)
            {
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

            virtual void setName(std::string name)
            {
                this->name = name;
            }

            virtual std::string getName()
            {
                return name;
            }

            virtual std::string toString()
            {
                std::stringstream result;
                result << "---- " << name.c_str() << " ----" << std::endl;

                if (dough != 0)
                {
                    result << dough->toString();
                    result << std::endl;
                }
                if (sauce != 0)
                {
                    result << sauce->toString();
                    result << std::endl;
                }
                if (cheese != 0)
                {
                    result << cheese->toString();
                    result << std::endl;
                }
                if (veggies.size())
                {
                    for (std::vector<Veggies *>::iterator it = veggies.begin(); veggies.end() != it; ++it)
                    {
                        result << (*it)->toString() << ", ";
                    }
                    result << std::endl;
                }
                if (clam != 0)
                {
                    result << clam->toString();
                    result << std::endl;
                }
                if (pepperoni != 0)
                {
                    result << pepperoni->toString();
                    result << std::endl;
                }

                return result.str();
            }
        };

    } // namespace Abstract
} // namespace Factory

#endif