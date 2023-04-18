#include "noticebuilder.h"

class NoticeBuilder;

class BuilderNote: public NoticeBuilder
{
public:
    void getPartsDone();// { _plane = new Plane("Jet Plane"); }
    void buildComment(std::string comment);//  { _plane->setEngine("Jet Engine");   }
    void buildNote(int note);//    { _plane->setBody("Jet Body");   }
};

