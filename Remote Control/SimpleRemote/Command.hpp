#ifndef COMMAND_HPP
#define COMMAND_HPP

#include "SimpleRemote.hpp"

namespace SimpleRemote
{
    class Command
    {
    public:
        virtual void execute() = 0;
    };

} // namespace SimpleRemote

#endif