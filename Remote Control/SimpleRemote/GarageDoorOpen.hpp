#ifndef GARAGE_DOOR_OPEN_HPP
#define GARAGE_DOOR_OPEN_HPP

#include "SimpleRemote.hpp"

namespace SimpleRemote
{
    class GarageDoorOpen : public Command
    {
    private:
        GarageDoor *garageDoor;

    public:
        GarageDoorOpen(GarageDoor *garageDoor)
        {
            this->garageDoor = garageDoor;
        }

        virtual void execute()
        {
            garageDoor->up();
        }
    };
} // namespace SimpleRemote

#endif