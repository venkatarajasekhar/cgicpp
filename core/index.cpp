#include "index.h"

using namespace std;

int main(int argc, const char * argv[], char** envp)
{

  // Boot
  Header *H = getHeader();
  H->print();
  // Html
  hook();

  return 0;
}

