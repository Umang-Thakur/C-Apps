#ifndef SIMPLE_REMOTE_CONTROL_HPP
#define SIMPLE_REMOTE_CONTROL_HPP

#include "SimpleRemote.hpp"

namespace SimpleRemote
{
    class SimpleRemoteControl
    {
    private:
        Command *slot;

    public:
        SimpleRemoteControl() {}

        virtual void setCommand(Command *command)
        {
            slot = command;
        }

        virtual void buttonWasPressed()
        {
            slot->execute();
        }
    };

} // namespace SimpleRemote

#endif