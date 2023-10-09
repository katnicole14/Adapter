#ifndef TARGET_H
#define TARGET_H
#include <string>

class Target
{
private:
    
public:
    Target();
        std::string execute_new_sql(const std::string& sql_query);
            std::string query_database(const std::string& sql_query);
                std::string process_result(const std::string& result) ;
};
#endif


