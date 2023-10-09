#ifndef ORM_H
#define ORM_H
#include <string>

//mt adaptee class
class ORM
{
private:
    /* data */
public:
    ORM();
    std:: string execute_query(std:: string& query);

    private:
    std::string sendToDatabase(std::string query);

    std::string Query(std::string sql_query);
};
#endif
