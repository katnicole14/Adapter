#include <iostream>
using namespace std;
#include <string>
#include "adapter.h"
#include "adapter.h"


int main (){

ORM *obj;
adapter * new_obj = new adapter(obj);

//Adapter execution
std::cout << "RESULTS FROM ADAPTER " << std::endl;
std::string result1 = new_obj->executeQuery("SELECT * FROM");
std::cout << result1 << std::endl<< std::endl;

//Target execution

std::cout << "RESULTS FROM TARGET " << std::endl<< std::endl;
Target * target = new Target();
std::string results2 = target->executeQuery("FROM table SELECT *");
 std::cout << results2 << std::endl;

    return 0;
}