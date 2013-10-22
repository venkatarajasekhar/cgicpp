#include <iostream>

using namespace std;

char *aasd(char *a) {

  cout << *a;
  a++;
  cout << "\n";
  cout << *a;
  cout << "\n";
  return a;
}
int main() {

  char a[256] = "123";

  cout << aasd(a);
  return 0;
}
