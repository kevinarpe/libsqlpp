
#include <string>
#include <inttypes.h>
#include <assert.h>

using namespace std ;

#include "TestDBObject.h"

TestDBObject::TestDBObject()
{
    o = new DBObject() ;
}

TestDBObject::~TestDBObject()
{
    delete o ;
}

void TestDBObject::setup()
{
}

void TestDBObject::test()
{
}

void TestDBObject::tearDown()
{
}
