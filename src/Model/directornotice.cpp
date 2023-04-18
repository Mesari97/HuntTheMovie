#include "directornotice.h"

Notice* DirectorNotice::createNotice(NoticeBuilder *builder)
{
    builder->getPartsDone();
    builder->buildComment(builder->getNotice()->getComment());
    builder->buildNote(builder->getNotice()->getNote());
    return builder->getNotice();
}
