#include "Helper.h"

Helper::Helper() {}

Helper::~Helper() {}

inline float Helper::getUpperBoundary() const
{
    return this->UPPER_BOUNDARY;
}

inline float Helper::getBelowBoundary() const
{
    return this->BELOW_BOUNDARY;
}

float Helper::readTemperature()
{
    std::string line;
    std::ifstream file("simulation.txt");
    if (file.is_open())
    {
        while (std::getline(file, line))
        {
            this->temperature = std::stof(line);
        }
        file.close();
        return this->temperature;
    }
    else
    {
        return 0;
    }
}

std::string Helper::moduleMotor()
{
    if (this->temperature < UPPER_BOUNDARY)
        return "We are in a decent level";
    else
        return "Turning off and cooling down motors";
}