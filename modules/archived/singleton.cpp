/*
Creational Pattern: SINGLETON
Author: Rajesh V.S
Language: C++
Email: rajeshvs@msn.com
*/

#include <iostream>

using namespace std;

class Singleton
{
private:
    static bool instanceFlag;
    static Singleton *single;
    static bool test;
    Singleton()
    {
        //private constructor
    }
public:
    static Singleton* getInstance();
    ~Singleton()
    {
        instanceFlag = false;
    }
    int set() {
 //     this->test = 2;
      return 1;
    }
    void method()
    {
     // cout << this->test;
      //  cout << "Method of the singleton class" << endl;
    }
};

bool Singleton::instanceFlag = false;
Singleton* Singleton::single = NULL;
Singleton* Singleton::getInstance()
{
    if(! instanceFlag)
    {
        single = new Singleton();
        instanceFlag = true;
        return single;
    }
    else
    {
        return single;
    }
}


int main()
{
    Singleton *sc1,*sc2;
    sc1->method();
    sc1->set();
    sc1 = Singleton::getInstance();
    sc2 = Singleton::getInstance();
    sc2->method();



    return 0;
}
