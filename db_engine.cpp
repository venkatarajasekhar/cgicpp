//#include "db_engine.h"
//#include "index.h"
#include <iostream>

using namespace std;

class db_Table {
  private:
    char filename;
    bool status;
  public: 
    db_Table(const char database[], const char* table) {
      this->status = false;
    }
    bool getStatus() {
      return this->status;
    }
};

int main() {

  db_Table db("db", "table");

  if (db.getStatus() == false) {
    cout << "FAILED";

  }
  
  return 0;
}
