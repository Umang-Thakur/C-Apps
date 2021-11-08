#ifndef COMMAND_LIGHT_ON_HPP
#define COMMAND_LIGHT_ON_HPP

#include "Undo.hpp"

namespace Undo
{
    class CommandLightOn : public Command
    {
    private:
        Light *light;

    public:
        CommandLightOn(Light *light)
        {
            this->light = light;
        }

        virtual void execute()
        {
            light->on();
        }

        virtual void undo()
        {
            light->off();
        }
    };
} // namespace Undo

#endif