#ifndef COMMAND_LIGHT_OFF_HPP
#define COMMAND_LIGHT_OFF_HPP

#include "Undo.hpp"

namespace Undo
{
    class CommandLightOff : public Command
    {
    private:
        Light *light;

    public:
        CommandLightOff(Light *light)
        {
            this->light = light;
        }

        virtual void execute()
        {
            light->off();
        }

        virtual void undo()
        {
            light->on();
        }
    };
} // namespace Undo

#endif