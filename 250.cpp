#include <iostream>
using namespace std;

class Base{
public:
  Base() : x(0){

  }
  ~Base(){

  }
  virtual void show(){
    cout << "Base show" << endl;
  }
  virtual void print(){
    cout << "Base print" << endl;
  }
  void fun(){
    cout << "Base fun" << endl;
  }
  
private:
  int x;
};

class D : public Base{
public:
  D() : y(0){

  }
  ~D(){

  }
  void show(){
    cout << "D show" << endl;
  }
  void fun(){
    cout << "D fun" << endl;
  }
  virtual void list(){
    cout << "D list" << endl;
  }
private:
  int y;
};

int main(){
  D d;
  d.fun();

  Base *pb = &d;
  pb->show();
  pb->fun();

  Base &fb = d;
  fb.show();
  fb.fun();
}
