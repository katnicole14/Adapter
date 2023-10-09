#include "ORM.h"
//adaptee
ORM::ORM(){

}
std::string ORM::executeQuery(std:: string& query){
    return sendToDatabase("Data from the database");

}
std::string ORM::sendToDatabase(std:: string query){
    return "results: " + query ;
}

    std::string ORM::query(std::string& sql_query){
     return "The query to the database" + sql_query;
    }
