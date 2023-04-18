#pragma once
#include <string>
#include <iostream>
#include "notice.h"

class Notice;

class NoticeBuilder
{
protected:
    Notice *_notice;
public:
    virtual void getPartsDone() = 0;
    virtual void buildComment(std::string comment) = 0;
    virtual void buildNote(int note) = 0;
    Notice* getNotice();
};
