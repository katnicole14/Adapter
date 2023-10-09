#include "adapter.h"
   adapter:: adapter(ORM * obj) : object(obj) {};

adapter::~adapter()
{
    delete object;
}
adapter::adapter():Target(){
    this->object = NULL;
}
//translate the incompatable grammar
std::string adapter:: executeQuery(std::string sql_query){
            std::string translated_query = "FROM table " + sql_query;
    std ::string results = object->execute_query(translated_query);
    return results;
 }