#include "Target.h"
Target::Target()
{
}
      std::string Target:: executeQuery( std::string sql_query){
      return query_database(sql_query);
      }
            std::string Target:: query_database( std::string sql_query){
                   return  sql_query;
            }
              
                
