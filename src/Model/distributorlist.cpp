#include "distributorlist.h"
#include <list>

/*Country DistributorList::getCountry()
{
    //mm fonction que user
}*/

std::list<Distributor> DistributorList::getDistributorList()
{
    return distributorList_;
}

bool DistributorList::isDistributorUnique(const std::list<Distributor>& distributorList, const Distributor& distributor)
{
    for (const auto& d : distributorList)
    {
        if ( d == distributor)
        {
            return false;
        }
    }
    return true;
}

void DistributorList::addDistributor(const Distributor& distributor)
{
    if (isDistributorUnique(distributorList_, distributor))
    {
        distributorList_.push_back(distributor);
    }
    else
    {
        std::cout << "Error: Distributor already exists in the list." << std::endl;
    }
}


void DistributorList::deleteDistributor(const Distributor& distributor)
{
    std::list<Distributor>::iterator it = distributorList_.begin();
    while (it != distributorList_.end())
    {
        if (*it == distributor)
        {
            it = distributorList_.erase(it);
            return;
        }
        else
        {
            ++it;
        }
    }
}
