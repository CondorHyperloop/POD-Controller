#include "Helper.h"

#define LOG(x) std::cout << x << std::endl

int main(int argc, char const *argv[])
{
    Helper helper;
    LOG("Reading temperature...");
    LOG(helper.readTemperature());
    LOG(helper.moduleMotor());
    return 0;
}
