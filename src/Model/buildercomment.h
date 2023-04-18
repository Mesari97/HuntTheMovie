#include "noticebuilder.h"

class NoticeBuilder;

class BuilderComment: public NoticeBuilder
{
public:
    void getPartsDone();// { _plane = new Plane("Propeller Plane"); }
    void buildComment(std::string comment);//  { _plane->setEngine("Propeller Engine");   }
    void buildNote(int note);//    { _plane->setBody("Propeller Body");   }
};
