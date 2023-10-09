#include "adapter.h"
   adapter:: adapter(ORM * obj) : object(obj) {};

adapter::~adapter()
{
    delete object;
}
adapter::adapter():Target(){
    this->object = NULL;
}
std::string adapter:: executeQuery(std::string sql_query){
    std ::string results = object->execute_query(sql_query);
    return results;
 }