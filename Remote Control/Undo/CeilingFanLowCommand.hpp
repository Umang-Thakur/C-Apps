#ifndef CEILING_FAN_LOW_COMMAND_HPP
#define CEILING_FAN_LOW_COMMAND_HPP

#include "Undo.hpp"

namespace Undo
{
    class CeilingFanLowCommand : public Command
    {
    private:
        CeilingFan *ceilingFan;
        int prevSpeed;

    public:
        CeilingFanLowCommand(CeilingFan *ceilingFan)
        {
            this->ceilingFan = ceilingFan;
        }

        virtual void execute()
        {
            prevSpeed = ceilingFan->getSpeed();
            ceilingFan->low();
        }

        virtual void undo()
        {
            if (prevSpeed == MODE ::HIGH)
            {
                ceilingFan->high();
            }
            else if (prevSpeed == MODE ::MEDIUM)
            {
                ceilingFan->medium();
            }
            else if (prevSpeed == MODE ::LOW)
            {
                ceilingFan->low();
            }
            else if (prevSpeed == MODE ::OFF)
            {
                ceilingFan->off();
            }
        }
    };
} // namespace Undo

#endif