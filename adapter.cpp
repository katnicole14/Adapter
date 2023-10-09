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

    std ::string results = object->execute_query(sql_query);
  
    //std:: string trans = translateSQL(sql_query);
    return "FROM table SELECT *";
 }

 std::string translateSQL(std::string query) {
    std::regex pattern("^SELECT (.+) FROM (.+)$");
    std::smatch matches;

    if (std::regex_match(query, matches, pattern)) {
        std::string selectedColumns = matches[1].str();
        std::string tableName = matches[2].str();
        std::string translatedQuery = "FROM " + tableName + " SELECT " + selectedColumns;
        return translatedQuery;
    } else {
        return "Invalid SQL query format";
    }
    }


















































































//reference the regex code from the internet  , i lost the link to the website where i got an example of how to use regex