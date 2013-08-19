#include <iostream>

using namespace std;

int main() {

  // Variable initialised
  int first = 1;
  // Point variable to the address of first
  int *p = &first;
  // For some reason you need to define it get the data of the reference rather than the address
  cout << *p;
  return 1;
}
