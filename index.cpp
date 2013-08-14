#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>

using namespace std;

int main(int argc, const char * argv[], char** envp)
{
  cout << "Content-type: text/html\n";
  cout << "\n\n";
  char** env;
  for (env = envp; *env != 0; env++)
  {
    char* thisEnv = *env;
    printf("%s </br>\n", thisEnv);
  }

  return 0;
}
