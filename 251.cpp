#include <iostream>
using namespace std;

class Base{
public:
  virtual void f(){}
  virtual void g(){}
  virtual void h(){}  
};
class Base1{
public:
  virtual void f(){}
  virtual void g(){}
  virtual void h(){}  
};
class Base2{
public:
  virtual void f(){}
  virtual void g(){}
  virtual void h(){}  
};
class D : public Base,public Base1,public Base2{
  virtual void f(){}
  virtual void g1(){}
  virtual void h1(){}  
};

int main(){
  D d;
}
