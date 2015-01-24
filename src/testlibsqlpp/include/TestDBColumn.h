#ifndef TESTDBCOLUMN_H
#define TESTDBCOLUMN_H

#include <DBColumn.h>


class TestDBColumn
{
    public:
        TestDBColumn();
        virtual ~TestDBColumn();
        void setup() ;
        void test() ;
        void tearDown() ;
    protected:
    private:
        DBColumn* c ;
};

#endif // TESTDBCOLUMN_H
