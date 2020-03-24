#pragma once
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

class Helper
{
private:
    const float UPPER_BOUNDARY = 150.0;
    const float BELOW_BOUNDARY = 0.0;
    float temperature = 0;
public:
    Helper();
    ~Helper();
    float readTemperature();
    std::string moduleMotor();
    inline float getUpperBoundary() const;
    inline float getBelowBoundary() const;
};
