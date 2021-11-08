#ifndef COMMAND_DIM_LIGHT_OFF_HPP
#define COMMAND_DIM_LIGHT_OFF_HPP

#include "Undo.hpp"

namespace Undo
{
    class CommandDimLightOff : public Command
    {
    private:
        Light *light;
        int preLevel;

    public:
        CommandDimLightOff(Light *light)
        {
            this->light = light;
        }

        virtual void execute()
        {
            preLevel = light->getLevel();
            light->off();
        }

        virtual void undo()
        {
            light->dim(preLevel);
        }
    };
} // namespace Undo

#endif