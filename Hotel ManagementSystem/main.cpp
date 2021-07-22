#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include <sstream>
#include <windows.h>
#include "Customer.h"
#include "Room.h"
#include "hotelManager.h"
#include "sql.h"

using namespace std;

int main(){
    sql sql;
    if(sql.conn) {
        hotelManager hm;
        hm.mainMenu();
    }
    else cout << "Not Connected";
    return 0;
}
