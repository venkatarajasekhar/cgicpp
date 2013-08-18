#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>

std::string run_cmd(const char * func_name);

class header {
  private:
    std::string headers;
  public:
    header() {
      this->set("Content-type: text/html");
    }
    void set (const char* header_override) {
     this->headers = std::string(header_override); 
    }
    void print () {
      std::cout << this->headers;
      std::cout << "\n\n\n";
    }
};
