#include "country.h"

Country::Country()
{
    name_ = "";
}

Country::Country(std::string name)
{
    name_ = name;
}


std::string Country::getName()
{
    return name_;
}

void Country::setName(std::string name)
{
    name_ = name;
}
