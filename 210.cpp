#include <iostream>
using namespace std;

class Base{
public:
  Base(int d) : x(d){
    cout << "create Base" << endl;
  }
  ~Base(){
    cout << "free Base" << endl;
  }
private:
  int x;
};
class Base1{
public:
  Base1(int d) : y(d){
    cout << "create Base1" << endl;
  }
  ~Base1(){
    cout << "free Base1" << endl;
  }
  void fun(){}
private:
  int y;
};
class Base2{
public:
  Base2(int d) : z(d){
    cout << "create Base2" << endl;
  }
  ~Base2(){
    cout << "free Base2" << endl;
  }
private:
  int z;
};

class D: public Base2, public Base1,private Base{
public:
  D(int d):Base1(d), Base(d), Base2(d), b(d), b1(d), b2(d){
    //Base1(d);
    cout << "create D" << endl;
  }
  ~D(){
    cout << "free D" << endl;
  }
private:
  Base2 b;
  Base1 b1;
  Base b2;
};

int main(){
  D d(10);
  d.fun();
}
