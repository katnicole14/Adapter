#include <iostream>
using namespace std;
#include <string>
#include "adapter.h"
#include "adapter.h"


int main (){

ORM *obj;
adapter * new_obj = new adapter(obj);
std::string result1 = new_obj->execute_sql("SELECT * FROM");
std::cout << result1 << std::endl;
    return 0;
}