#pragma once
#include "artwork.h"

class Artwork;

class Series :
    public Artwork
{
public:
    int getEpisodeNumber();
    void setEpisodeNumber(int episodeNumber);
    int getSeasonNumber();
    void setSeasonNumber(int seasonNumber);
private:
    int episodeNumber_;
    int seasonNumber_;
};
