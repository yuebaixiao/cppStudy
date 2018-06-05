#include <iostream>
using namespace std;

class A{
public:
  virtual void eat() = 0;
  virtual void sleep() = 0;
  void fly(){
    eat();
  }
};

class Human : public A{
public:
  virtual void eat(){
    cout << "human eat" << endl;
  }
  virtual void sleep(){
    cout << "human sleep" << endl;
  }
};

int main(){
  Human p;
  A *a = &p;
  a->fly();
}
