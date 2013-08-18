#include "index.h"

using namespace std;

int main(int argc, const char * argv[], char** envp)
{
  cout << "Content-type: text/html\n";
  cout << "\n\n";
  cout << run_cmd("pwd");

  print_env(envp);
  return 0;
}
