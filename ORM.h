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
    std:: string executeQuery(std:: string& query);

    private:
    std::string sendToDatabase(std::string query);

    std::string query(std::string& sql_query);
};
#endif
