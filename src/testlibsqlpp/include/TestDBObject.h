#ifndef TESTDBOJECT_H
#define TESTDBOJECT_H

#include <DBObject.h>


class TestDBObject
{
    public:
        TestDBObject();
        virtual ~TestDBObject();
        void setup() ;
        void test() ;
        void tearDown() ;
    protected:
    private:
        DBObject* o ;
};

#endif // TESTDBOJECT_H
