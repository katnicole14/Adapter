#include <iostream>
using namespace std;
#include <string>
#include "adapter.h"
#include "adapter.h"


int main (){

ORM *obj =new ORM ();
adapter * new_obj = new adapter(obj);

//Adapter execution
std::cout << "ADAPTER " << std::endl;
std::string result1 = new_obj->executeQuery("SELECT * FROM table");
std::cout<<"input: SELECT * FROM table " << std::endl;
std::cout<<"output::" << result1 <<std::endl<< std::endl;

//Target execution

std::cout <<  "TARGET" << std::endl;
Target * target = new Target();
std::string results2 = target->executeQuery("FROM table SELECT *");
std::cout<<"input:FROM table SELECT *" << std::endl;
 std::cout<<"output:" << results2 << std::endl;

    return 0;
}