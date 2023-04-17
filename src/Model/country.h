#pragma once
#include <string>
#include <iostream>

class Country
{
public:
    Country();
    Country(std::string name);
    std::string getName();
    void setName(std::string name);
private:
    std::string name_;
};
