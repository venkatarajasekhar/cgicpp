//#include "db_engine.h"
//#include "index.h"
#include <iostream>

using namespace std;

class db_Table {
  private:
    char filename;
  public: 
    bool signal;
    db_Table(const char database[], const char* table) {
      this->signal = false;
    }
};

int main() {

  db_Table test("db", "table");

  if (test.signal == false) {

  }
  
  return 0;
}
