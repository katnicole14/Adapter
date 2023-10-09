#include "ORM.h"
//adaptee
ORM::ORM(){

}
std::string ORM::execute_query(std:: string& query){
    return sendToDatabase(Query(query));

}
std::string ORM::sendToDatabase(std:: string query){
    return "results: " + query ;
}

    std::string ORM::Query(std::string sql_query){
     return "The query to the database " + sql_query;
    }
