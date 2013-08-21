#include "index.h"

using namespace std;

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
  return 0;
}

