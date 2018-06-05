#include <iostream>
using namespace std;

class Base{
public:
  Base():d(0){}
  ~Base(){}
  virtual void show(){
    cout << "Base show" << endl;
  }
  void show(int i){
    cout << "Base show(" << i << endl; 
  }
private:
  int d;
};

class D : public Base{
public:
  D():x(0){}
  ~D(){}
  void show(){
    cout << "D show" << endl;
  }
  void list(){
    cout << "D list" << endl;
  }
private:
  int x;
};

int main(){
  D d;
  
  Base b;
  b = d;
  b.show();  

  Base *pb;
  pb = &d;
  pb->show();
  
  Base &ps = d;
  ps.show();
  
}
