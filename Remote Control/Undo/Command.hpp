#ifndef COMMAND_HPP
#define COMMAND_HPP

#include "Undo.hpp"

namespace Undo
{
    class Command
    {

    public:
        virtual void execute() = 0;
        virtual void undo() = 0;
    };
} // namespace Undo

#endif