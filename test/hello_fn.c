#include <stdio.h>
#include "hello.h"
//#include <string>
#include <sstream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>

using namespace std;
  void 
hello (const char * name)
{
  printf ("Hello, %s!\n", name);
}

string cf_exec(const char * func_name)
{
  FILE *in;
  char buff[512];
  stringstream value;
  if(!(in = popen(func_name, "r"))){
    return "code:9 ";
  }

  while(fgets(buff, sizeof(buff), in) != NULL){
    value << buff;
  }
  pclose(in);

  return value.str();
}
