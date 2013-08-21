#include "index.h"

using namespace std;


int main(int argc, const char * argv[], char** envp)
{

  Header *Header, *H2;
  Header = Header::getInstance();
  Header->print();
  return 0;
}

