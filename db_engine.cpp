//#include "db_engine.h"
//#include "index.h"
#include <iostream>
#include <fstream>

using namespace std;

class db_Table {
  private:
    char filename;
    bool status;
  public: 
    ofstream* db_stream;
    db_Table(const char* database, const char* table) {
      ofstream db_stream(database);
      this->db_stream = &db_stream;
      if (db_stream.is_open()) {
        this->status = true;
      }
      else {
        this->status = false;
      }
    }
    ~db_Table() {
      this->close();
    }
    bool getStatus() {
      return this->status;
    }
    void close() {
      if (this->db_stream != NULL) {
        this->db_stream->close();
      }
    }
};

int main() {

  db_Table db("db", "table");
  *db.db_stream << "ASD";
  db.close();
  
  return 0;
}
/*
  string line;
  while ( db.db_stream->good() )
  {
    getline (db.db_stream,line);
    cout << line << endl;
  }

  if (db.getStatus() == false) {
    cout << "FAILED";
  }

  return 0;
}
*/
