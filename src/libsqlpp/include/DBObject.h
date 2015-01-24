#ifndef DBOBJECT_H
#define DBOBJECT_H

#include <string>

using namespace std ;

class DBObject
{
    public:
        DBObject();
        virtual ~DBObject();
        string GetName() { return m_name; }
        void SetName(string val) { m_name = val; }
    protected:
    private:
        string m_name;
};

#endif // DBOBJECT_H
