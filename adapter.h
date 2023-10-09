#ifndef ADAPTER_H
#define ADAPTER_H
#include <string>
#include "ORM.h"
#include "Target.h"

class adapter:public Target
{
private:
    ORM * object;
public:
adapter();
    adapter(ORM * obj) ;
    ~adapter();
};
#endif


