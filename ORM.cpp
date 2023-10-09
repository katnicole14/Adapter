#include "ORM.h"
//adaptee
ORM::ORM(){

}
std::string ORM::execute_query(std:: string& query){
    return Query(query);

}


    std::string ORM::Query(std::string sql_query){
     return  sql_query;
    }
