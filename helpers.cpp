#include "index.h"

using namespace std;

string run_cmd(const char * func_name)
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
