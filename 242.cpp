#include <iostream>
using namespace std;

class Base{
public:
  Base(){
    cout << "create Base" << endl;
  }
   ~Base(){
    cout << "free Base" << endl;
  }
  virtual Base* show(){
    cout << "Base show" << endl;
    return this;
  }
};

class D : public Base{
public:
  D(){
    cout << "create D" << endl;
  }
  ~D(){
    cout << "free D" << endl;
  }
  D* show(){
    cout << "D show" << endl;
    return this;
  }
};

int main(){
  D d;
  Base* pb = &d;
  pb->show();

  //Base* p = new D;
  //delete p;
}
