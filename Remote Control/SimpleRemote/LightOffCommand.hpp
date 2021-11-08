#ifndef LIGHT_OFF_COMMAND_HPP
#define LIGHT_OFF_COMMAND_HPP

#include "SimpleRemote.hpp"

namespace SimpleRemote
{
    class LightOffCommand : public Command
    {
    private:
        Light *light;

    public:
        LightOffCommand(Light *light)
        {
            this->light = light;
        }

        virtual void execute()
        {
            light->off();
        }
    };
} // namespace SimpleRemote

#endif