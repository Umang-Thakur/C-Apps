#include "Pizzas.hpp"

using namespace Factory::Abstract;

int main(int argc, char *argv[])
{
    PizzaStore *nyStore = new NYPizzaStore();

    Pizza *pizza = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << pizza->toString() << std::endl;

    pizza = nyStore->orderPizza("clam");
    std::cout << "Ethan ordered a " << pizza->toString() << std::endl;

    pizza = nyStore->orderPizza("pepperoni");
    std::cout << "Ethan ordered a " << pizza->toString() << std::endl;

    pizza = nyStore->orderPizza("veggie");
    std::cout << "Ethan ordered a " + pizza->toString() << std::endl;

    return 0;
}