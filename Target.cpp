#include "Target.h"
Target::Target()
{
}
      std::string Target:: executeQuery( std::string sql_query){
      return process_result(query_database(sql_query));
      }
            std::string Target:: query_database( std::string sql_query){
                   return "QUERY PASSED TO DATABASE " + sql_query;
            }
                std::string Target:: process_result( std::string result){
                return result;
                }