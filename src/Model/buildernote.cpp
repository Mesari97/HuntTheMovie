#include "buildernote.h"

void BuilderNote::getPartsDone()
{
    _notice = new Notice();
}

void BuilderNote::buildComment(std::string comment)
{
    _notice->setComment(comment);
}

void BuilderNote::buildNote(int note)
{
    _notice->setNote(note);
}
