#include "SimpleRemote.hpp"

using namespace SimpleRemote;

int main()
{
    SimpleRemoteControl *remote = new SimpleRemoteControl();
    Light *light = new Light();
    GarageDoor *garageDoor = new GarageDoor();

    LightOnCommand *lightOn = new LightOnCommand(light);
    GarageDoorOpen *garageOpen =
        new GarageDoorOpen(garageDoor);

    remote->setCommand(lightOn);
    remote->buttonWasPressed();

    remote->setCommand(garageOpen);
    remote->buttonWasPressed();

    return 0;
}