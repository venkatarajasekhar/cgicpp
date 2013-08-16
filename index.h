#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>

std::string run_cmd(const char * func_name);
void print_env(char** envp);
