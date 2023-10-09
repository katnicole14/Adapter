#ifndef ORM_H
#define ORM_H
#include <string>



// adaptee class
class ORM
{

public:
    ORM();
    std:: string execute_query(std:: string& query);
  

    private:
  

    std::string Query(std::string sql_query);
};
#endif
