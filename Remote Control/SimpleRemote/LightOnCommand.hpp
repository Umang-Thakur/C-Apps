#ifndef LIGHT_ON_COMMAND_HPP
#define LIGHT_ON_COMMAND_HPP

#include "SimpleRemote.hpp"

namespace SimpleRemote
{
    class LightOnCommand : public Command
    {
    private:
        Light *light;

    public:
        LightOnCommand(Light *light)
        {
            this->light = light;
        }

        virtual void execute()
        {
            light->on();
        }
    };
} // namespace SimpleRemote

#endif