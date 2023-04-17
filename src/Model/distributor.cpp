#include "distributor.h"

Distributor::Distributor()
{
    name_ = "";
    link_ = "";
}

Distributor::Distributor(std::string name, std::string link)
{
    name_ = name;
    link_ = link;
}

Distributor Distributor::getDistributor(Distributor distributor_)
{
    return distributor_;
}


std::string Distributor::getName()
{
    return name_;
}

void Distributor::setName(std::string name)
{
    name_ = name;
}

std::string Distributor::getLink()
{
    return link_;
}

void Distributor::setLink(std::string link)
{
    link_ = link;
}

bool Distributor::operator==(const Distributor& other) const
{
    return (name_ == other.name_ && link_ == other.link_);
}

bool Distributor::operator!=(const Distributor& other) const
{
    return !(*this == other);
}

