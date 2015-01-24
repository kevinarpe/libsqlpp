#ifndef DBCOLUMN_H
#define DBCOLUMN_H

#include <stdbool.h>
#include <inttypes.h>

using namespace std;

#include <DBObject.h>


class DBColumn : public DBObject
{
    public:
        DBColumn();
        virtual ~DBColumn();
        string GetTypeName() { return m_typeName; }
        void SetTypeName( string val) { m_typeName = val; }
        bool GetNullable() { return m_nullable; }
        void SetNullable( bool val) { m_nullable = val; }
        int64_t GetLength() { return m_length; }
        void SetLength( int64_t val) { m_length = val; }
    protected:
    private:
         string m_typeName;
         bool m_nullable;
         int64_t m_length;
};

#endif // DBCOLUMN_H
