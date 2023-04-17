#pragma once
#include "artwork.h"

class Artwork;

class Movie :
    public Artwork
{
public:
    int getMinutesDuration();
    void setMinutesDuration(int minutesDuration);
private:
    int minutesDuration_;
};
