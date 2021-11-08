#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "Undo.hpp"

namespace Undo
{
    class Light
    {
    private:
        std::string location;
        int level;

    public:
        Light(std::string location)
        {
            this->location = location;
        }

        virtual void on()
        {
            this->level = 100;
            std::cout << location.c_str() << "'s light is On." << std::endl;
        }

        virtual void off()
        {
            this->level = 0;
            std::cout << location.c_str() << "'s light is Off." << std::endl;
        }

        virtual void dim(int level)
        {
            this->level = level;

            if (this->level == 0)
            {
                off();
            }
            else
            {
                std::cout << location.c_str() << "'s light is dimmed to " << level << "%." << std::endl;
            }
        }

        virtual int getLevel()
        {
            return level;
        }
    };
} // namespace Undo

#endif