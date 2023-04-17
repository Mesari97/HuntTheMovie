#include "artwork.h"

Artwork::Artwork()
{
    id_ = generateId();
    name_ = "";
}

Artwork::Artwork(std::string name)
{
    id_ = generateId();
    name_ = name;
}

Artwork::Artwork(std::string id, std::string name)
{
    id_ = id;
    name_ = name;
}

std::string Artwork::getId()
{
    return id_;
}

void Artwork::setId(std::string id)
{
    id_ = id;
}

std::string Artwork::getName()
{
    return name_;
}

void Artwork::setName(std::string name)
{
    name_ = name;
}

DistributorList* Artwork::getDistributorList()
{
    return distributorList_;
}

void Artwork::setDistributorList(DistributorList* distributorList)
{
    distributorList_ = distributorList;
}

std::string Artwork::generateId()
{
    //à faire
    return "";
}

bool Artwork::operator == (const Artwork &artwork)
{
    if (id_.compare(artwork.id_))
    {
        return true;
    }
    return false;
}

bool Artwork::operator != (const Artwork &artwork)
{
    if (id_.compare(artwork.id_))
    {
        return false;
    }
    return true;
}
