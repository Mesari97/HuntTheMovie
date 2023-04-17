#include "series.h"

int Series::getEpisodeNumber()
{
    return episodeNumber_;
}

void Series::setEpisodeNumber(int episodeNumber)
{
    episodeNumber_ = episodeNumber;
}

int Series::getSeasonNumber()
{
    return seasonNumber_;
}

void Series::setSeasonNumber(int seasonNumber)
{
    seasonNumber_ = seasonNumber;
}
