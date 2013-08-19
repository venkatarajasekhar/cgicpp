#include "index.h"

using namespace std;


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

bool Header::instanceFlag = false;
Header* Header::instance = NULL;
Header* Header::getInstance() {
  if (!instanceFlag) {
    instance = new Header();
    instanceFlag = true;
    return instance;
  } 
  else {
    return instance;
  }
}

int main(int argc, const char * argv[], char** envp)
{

  Header *Header, *H2;
  Header = Header::getInstance();
  Header->print();
  // print_env(envp);
  return 0;
}

