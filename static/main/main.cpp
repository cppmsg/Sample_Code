#include <iostream>
#include "mygreatclass.h"
using namespace std;
using namespace myNameSpace;

/*4 uses of static:
static function variable - static storage duration
static file scope variable - static duration, internal linkage
static class variable - static storage duration, global linkage, namespaced to class
static class method - essentially a free function namespaced to class, cannot access non-static class variables
*/
int main(int argc, char *argv[])
{
    myGreatClass obj;
    auto var =
            myGreatClass::staticMethod();
    auto var2 = myGreatClass::myVar;
    auto staticFucVar =
            obj.aMethod();
    staticFucVar =
                obj.aMethod();
    std::cout<<"var "<<var <<
             " var2 "<< var2 <<
             " staticFucVar " << staticFucVar
             <<std::endl;
}
