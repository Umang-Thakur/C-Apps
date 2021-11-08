#ifndef NO_COMMAND_HPP
#define NO_COMMAND_HPP

#include "Undo.hpp"

namespace Undo
{
    class NoCommand : public Command
    {
    public:
        virtual void execute()
        {
        }

        virtual void undo()
        {
        }
    };
} // namespace Undo

#endif