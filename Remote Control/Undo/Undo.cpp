#include "Undo.hpp"

using namespace Undo;

int main(int argc, char *argv[])
{

    RemoteControl *remoteControl = new RemoteControl();

    Light *livingRoomLight = new Light("Living Room");

    CommandLightOn *livingRoomLightOn =
        new CommandLightOn(livingRoomLight);
    CommandLightOff *livingRoomLightOff =
        new CommandLightOff(livingRoomLight);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);

    remoteControl->onCommandWasPressed(0);
    remoteControl->offCommandWasPressed(0);
    std::cout << remoteControl->toString() << std::endl;
    remoteControl->undoWasPressed();
    remoteControl->offCommandWasPressed(0);
    remoteControl->onCommandWasPressed(0);
    std::cout << remoteControl->toString() << std::endl;
    remoteControl->undoWasPressed();

    CeilingFan *ceilingFan = new CeilingFan("Living Room");

    CeilingFanMediumCommand *ceilingFanMedium =
        new CeilingFanMediumCommand(ceilingFan);
    CeilingFanHighCommand *ceilingFanHigh =
        new CeilingFanHighCommand(ceilingFan);
    CeilingFanOffCommand *ceilingFanOff =
        new CeilingFanOffCommand(ceilingFan);

    remoteControl->setCommand(0, ceilingFanMedium, ceilingFanOff);
    remoteControl->setCommand(1, ceilingFanHigh, ceilingFanOff);

    remoteControl->onCommandWasPressed(0);
    remoteControl->offCommandWasPressed(0);
    std::cout << remoteControl->toString() << std::endl;
    remoteControl->undoWasPressed();

    remoteControl->onCommandWasPressed(1);
    std::cout << remoteControl->toString() << std::endl;
    remoteControl->undoWasPressed();

    return 0;
}
