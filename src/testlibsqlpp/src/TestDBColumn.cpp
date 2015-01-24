
#include <string>
#include <inttypes.h>
#include <assert.h>

using namespace std ;

#include "TestDBColumn.h"

const string    columnName = "Test_Column" ;
const string    typeName = "varchar" ;
const int64_t   length = 30 ;
const bool      nullable = false ;

TestDBColumn::TestDBColumn()
{
    c = new DBColumn() ;
}

TestDBColumn::~TestDBColumn()
{
    delete c ;
}

void TestDBColumn::setup()
{
    c->SetName(columnName) ;
    c->SetTypeName(typeName) ;
    c->SetLength(length) ;
    c->SetNullable(nullable) ;
}

void TestDBColumn::test()
{
    assert(c->GetName() == columnName) ;
    assert(c->GetTypeName() == typeName) ;
    assert(c->GetLength() == length) ;
    assert(c->GetNullable() == nullable) ;
}

void TestDBColumn::tearDown()
{
}
