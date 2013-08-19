#include <iostream>
#include <string>
using namespace std;


class Singleton {
  private: 
    static int *p;
    int header;
  public:
    Singleton() {
      Singleton::header = 1;
    }
    void print() {
      this->header = 2;
      std::cout << Singleton::header;
    }
};



int main() {
  
  Singleton single;
  single.print();

  return 1;
}
