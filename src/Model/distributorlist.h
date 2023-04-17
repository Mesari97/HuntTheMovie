#pragma once
#include <string>
#include <iostream>
#include "distributor.h"
#include "country.h"
#include "user.h"
#include <list>

class Distributor;
class Country;
class User;

class DistributorList
{
public:
    Country getCountry();
    std::list<Distributor> getDistributorList();
    bool isDistributorUnique(const std::list<Distributor>& distributorList, const Distributor& distributor);
    void addDistributor(const Distributor& distributor);
    void deleteDistributor(const Distributor& distributor);
private:
    std::list<Distributor> distributorList_;
};
