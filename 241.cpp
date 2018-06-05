#include <iostream>
using namespace std;

class A{
public:
  virtual void eat(){}
  virtual void sleep(){}
};

class Human : public A{
public:
  void eat(){
    cout << "Human eat" << endl;
  }
  void sleep(){
    cout << "Human sleep" << endl;
  }
};

class Pig : public A{
public:
  void eat(){
    cout << "Pig eat" << endl;
  }
  void sleep(){
    cout << "Pig sleep" << endl;
  }
};

void fun(A& a){
  a.eat();
  a.sleep();
}
int main(){
  Human h;
  Pig p;
  fun(h);
  fun(p);
}
