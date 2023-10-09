#ifndef TARGET_H
#define TARGET_H
#include <string>


class Target
{
private:
    
public:
    Target();
        std::string executeQuery( std::string sql_query);
           std::string translateSQL( std::string query);

        private:
            std::string query_database( std::string sql_query);
            std::string process_result( std::string result) ;
};
#endif


