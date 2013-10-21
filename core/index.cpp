#include "index.h"

using namespace std;

int main(int argc, const char * argv[], char** envp)
{

  Header *H = getHeader();
  H->print();
  return 0;
}

