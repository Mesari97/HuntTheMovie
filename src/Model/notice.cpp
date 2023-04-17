#include "artwork.h"
#include "notice.h"

Notice::Notice()
{
    note_ = 0;
    comment_ = "";
}

Notice::Notice(int note, std::string comment, Artwork artwork)
{
    note_ = note;
    comment_ = comment;
    artwork_ = artwork;
}

Notice::~Notice()
{
}

int Notice::getNote()
{
    return note_;
}

void Notice::setNote(int note)
{
    note_ = note;
}

std::string Notice::getComment()
{
    return comment_;
}

void Notice::setComment(std::string comment)
{
    comment_ = comment;
}

Artwork Notice::getArtwork()
{
    return artwork_;
}

void Notice::setArtwork(Artwork artwork)
{
    artwork_ = artwork;
}

