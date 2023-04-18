#include "noticebuilder.h"
#include "notice.h"

class NoticeBuilder;
class Notice;

class DirectorNotice
{
    NoticeBuilder *builder;
public:
    Notice* createNotice(NoticeBuilder *builder);
};
