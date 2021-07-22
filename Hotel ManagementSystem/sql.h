#ifndef SQL_H_INCLUDED
#define SQL_H_INCLUDED

#include <windows.h>
#include <mysql.h>

using namespace std;

class sql {
    public:
    MYSQL *conn= mysql_real_connect(mysql_init(0), "localhost", "hotel_management", "Hotel456*", "hotel", 3306, NULL, 0);
    MYSQL_ROW row;
    MYSQL_RES *res;

    bool query_check(stringstream &ss, sql sql);
};

#endif // SQL_H_INCLUDED
