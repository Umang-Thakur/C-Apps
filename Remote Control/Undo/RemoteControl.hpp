#ifndef REMOTE_CONTROL_HPP
#define REMOTE_CONTROL_HPP

#include "Undo.hpp"

namespace Undo
{
    class RemoteControl
    {
    private:
        Command *onCommands[7];
        Command *offCommands[7];
        Command *undoCommand;

    public:
        RemoteControl()
        {
            Command *noCommand = new NoCommand();
            for (int i = 0; i < 7; i++)
            {
                onCommands[i] = noCommand;
                offCommands[i] = noCommand;
            }

            undoCommand = noCommand;
        }

        virtual void setCommand(int slot, Command *onCommand, Command *offCommand)
        {
            onCommands[slot] = onCommand;
            offCommands[slot] = offCommand;
        }

        virtual void onCommandWasPressed(int slot)
        {
            onCommands[slot]->execute();
            undoCommand = onCommands[slot];
        }

        virtual void offCommandWasPressed(int slot)
        {
            offCommands[slot]->execute();
            undoCommand = offCommands[slot];
        }

        virtual void undoWasPressed()
        {
            undoCommand->undo();
        }

        virtual std::string toString()
        {
            std::stringstream stringBuff;

            stringBuff << std::endl
                       << "------ Remote Control -------" << std::endl;
            for (int i = 0; i < 7; i++)
            {
                stringBuff << "[slot " << i << "] "
                           << typeid(*onCommands[i]).name()
                           << "    "
                           << typeid(*offCommands[i]).name()
                           << std::endl;
            }
            stringBuff << "[undo] " << typeid(*undoCommand).name() << std::endl;
            return stringBuff.str();
        }
    };
} // namespace Undo

#endif