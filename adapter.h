#ifndef ADAPTER_H
#define ADAPTER_H
#include <string>
#include "ORM.h"
#include "Target.h"
#include <regex>


class adapter:public Target
{
private:
    ORM * object;
public:
adapter();
    adapter(ORM * obj) ;
    ~adapter();

    //calls the executeQuery() method from the ORM
    std::string executeQuery( std::string sql_query);
  std::string translateSQL( std::string query);
};
#endif


