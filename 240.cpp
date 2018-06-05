#include <iostream>
using namespace std;

class Base{
public:
  virtual void show();//{
    // cout << "Base show" << endl;
    //}
  void show(int i){
    cout << "Base show(" << i<< ")" << endl;
  }
};

void Base::show(){
  cout << "Base show" << endl;
}
class D : public Base{
public:
  void show(){
    cout << "D show" << endl;
  }
  void show(int i){
    cout << "D show(" << i<< ")" << endl;
  }
};

class C : public D{
public:
  void show(){
    cout << "C show" << endl;
  }
  void show(int i){
    cout << "C show(" << i<< ")" << endl;
  }
};

int main(){
  C d;
  Base *pb;
  pb = &d;
  pb->show();
  pb->show(19);
}
