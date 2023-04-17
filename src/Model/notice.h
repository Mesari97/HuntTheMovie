#pragma once
#include "artwork.h"
#include <string>

class Artwork;

class Notice
{
public :
    Notice();
    Notice(int note, std::string comment, Artwork artwork);
    ~Notice();
    int getNote();
    void setNote(int note);
    std::string getComment();
    void setComment(std::string comment);
    Artwork getArtwork();
    void setArtwork(Artwork artwork);
private :
    int note_;
    std::string comment_;
    Artwork artwork_;
};
