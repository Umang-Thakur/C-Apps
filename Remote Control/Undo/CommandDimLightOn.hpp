#ifndef COMMAND_DIM_LIGHT_ON_HPP
#define COMMAND_DIM_LIGHT_ON_HPP

#include "Undo.hpp"

namespace Undo
{
    class CommandDimLightOn : public Command
    {
    private:
        Light *light;
        int preLevel;

    public:
        CommandDimLightOn(Light *light)
        {
            this->light = light;
        }

        virtual void execute()
        {
            preLevel = light->getLevel();
            light->dim(75);
        }

        virtual void undo()
        {
            light->dim(preLevel);
        }
    };
} // namespace Undo

#endif