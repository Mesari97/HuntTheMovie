#pragma once
#include <string>
#include <iostream>

class Distributor
{
public:
    Distributor();
    Distributor(std::string name, std::string link);
    Distributor getDistributor(Distributor distributor_);
    std::string getName();
    void setName(std::string name);
    std::string getLink();
    void setLink(std::string link);
    bool operator==(const Distributor& other) const;
    bool operator!=(const Distributor& other) const;
private:
    std::string name_;
    std::string link_;
};
