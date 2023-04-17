#include "user.h"

//constructors
User::User()
{
    username_ = "";
    password_ = "";
}

User::User(std::string username, std::string password)
{
    username_ = username;
    password_ = password;
}

//getter and setter
std::string	User::getUsername()
{
    return username_;
}

void User::setUsername(std::string username)
{
    username_ = username;
}

std::string User::getPassword()
{
    return password_;
}

void User::setPassword(std::string password)
{
    password_ = password;
}

std::map<std::string, std::list<Artwork>> User::getArtworkListList()
{
    return artworkListList_;
}

void User::setArtworkListList(std::map<std::string, std::list<Artwork>> artworkListList)
{
    artworkListList_ = artworkListList;
}

std::list<Notice> User::getNoticeList()
{
    return noticeList_;
}

void User::setNoticeList(std::list<Notice> noticeList)
{
    noticeList_ = noticeList;
}

//Country
Country User::getCountry() {
    //à implémenter, jsp encore comment on va récupérer le pays de l'user
}

//NoticeList methodes
int User::addNotice(Notice notice)
{
    std::list<Notice>::iterator it = noticeList_.begin();
    while (it != noticeList_.end())
    {
        if (it->getArtwork() == notice.getArtwork())
        {
            return 1;
        }
    }
    noticeList_.push_back(notice);
    return 0;
}

int User::deleteNotice(Notice notice)
{
    std::list<Notice>::iterator it = noticeList_.begin();
    while (it != noticeList_.end())
    {
        if (it->getArtwork() == notice.getArtwork())
        {
            noticeList_.erase(it);
            return 0;
        }
    }
    return 1;
}

void User::setNoticeComment(Notice notice, std::string comment)
{
    notice.setComment(comment);
}

void User::setNoticeNote(Notice notice, int note)
{
    notice.setNote(note);
}

//ArtworkListList methodes
int User::addArtworkList(std::string name)
{
    std::map<std::string, std::list<Artwork>>::iterator it = artworkListList_.find(name);
    if (it == artworkListList_.end())
    {
        artworkListList_.insert(std::pair<std::string, std::list<Artwork>>(name, {}));
        return 0;
    }
    return 1;
}

int User::deleteArtworkList(std::string name)
{
    std::map<std::string, std::list<Artwork>>::iterator it = artworkListList_.find(name);
    if (it != artworkListList_.end())
    {
        artworkListList_.erase(it);
        return 0;
    }
    return 1;
}

int User::addArtworkToArtworkList(std::string name, Artwork artwork)
{
    std::map<std::string, std::list<Artwork>>::iterator it = artworkListList_.find(name);
    if (it != artworkListList_.end())
    {
        std::list<Artwork>::iterator listIt = it->second.begin();
        while (listIt != it->second.end())
        {
            if (listIt->getId() == artwork.getId())
            {
                return 1;
            }
        }
        artworkListList_.find(name)->second.push_back(artwork);
        return 0;
    }
    return 1;
}

int User::deleteArtworkFromArtworkList(std::string name, Artwork artwork)
{
    std::map<std::string, std::list<Artwork>>::iterator it = artworkListList_.find(name);
    if (it != artworkListList_.end())
    {
        std::list<Artwork>::iterator listIt = it->second.begin();
        while (listIt != it->second.end())
        {
            if (listIt->getId() == artwork.getId())
            {
                artworkListList_.find(name)->second.erase(listIt);
                return 0;
            }
        }
        return 1;
    }
    return 1;
}
