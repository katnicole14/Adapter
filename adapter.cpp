#include "adapter.h"
   adapter:: adapter(ORM * obj) : object(obj) {};

adapter::~adapter()
{
    delete object;
}
adapter::adapter(){
    this->object = NULL;
}
std::string adapter:: execute_sql(const std::string& sql_query){
    
}