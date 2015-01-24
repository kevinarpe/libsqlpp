#include <iostream>
#include <string>
#include <assert.h>

#include <testsqlpp.h>
using namespace std;

int main()
{

    TestDBColumn* c = new TestDBColumn() ;
    c->setup() ;
    c->test() ;
    c->tearDown() ;
    delete c ;

}
