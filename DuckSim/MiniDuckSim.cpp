#include "MiniDuckSim.hpp"

using namespace MiniDuckApp;

int main(int argc, char *argv[])
{
    MallardDuck mallard;
    mallard.display();
    mallard.performFly();
    mallard.performQuack();
    mallard.swim();

    RubberDuck rubberDuckie;
    rubberDuckie.display();
    rubberDuckie.performFly();
    rubberDuckie.performQuack();
    rubberDuckie.swim();

    DecoyDuck decoy;
    decoy.display();
    decoy.performFly();
    decoy.performQuack();
    decoy.swim();

    ModelDuck model;
    model.display();
    model.performFly();
    model.performQuack();
    model.swim();
    model.setFlyBehavior(new FlyRocketPowered());
    model.performFly();
    model.setQuackBehavior(new FakeQuack());
    model.performQuack();

    return 0;
}
