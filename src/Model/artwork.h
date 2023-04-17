#pragma once
#include <string>
#include <iostream>

// Forward declaration de DistributorList
class DistributorList;

class Artwork
{
public :
    Artwork();
    Artwork(std::string name);
    Artwork(std::string id, std::string name);
    std::string getId();
    void setId(std::string id);
    std::string getName();
    void setName(std::string name);
    DistributorList* getDistributorList(); // changer le type de retour pour un pointeur
    void setDistributorList(DistributorList* distributorList); // changer l'argument pour un pointeur
    std::string generateId();
    bool operator == (const Artwork &artwork);
    bool operator != (const Artwork &artwork);
private :
    std::string id_;
    std::string name_;
    DistributorList* distributorList_; // changer le type pour un pointeur
};
