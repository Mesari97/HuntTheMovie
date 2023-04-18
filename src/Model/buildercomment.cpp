
#include "buildercomment.h"


void BuilderComment::getPartsDone()
{
    _notice = new Notice();
}

void BuilderComment::buildComment(std::string comment)
{
    _notice->setComment(comment);
}

void BuilderComment::buildNote(int note)
{
    _notice->setNote(note);
}
