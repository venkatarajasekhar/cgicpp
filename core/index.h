#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>

std::string run_cmd(const char * func_name);
void print_env(char** envp);

class Header {
  private:
    std::string headers;
    static bool instanceFlag;
    static Header* instance;
  public:
    static Header* getInstance();
    Header() {
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
Header *getHeader();
