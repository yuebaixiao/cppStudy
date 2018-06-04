#include <iostream>
using namespace std;

class Base{
public:
  Base():x(0){}
  ~Base(){}
  void show_base(){
    cout << "show base!" << endl;
  }
  void setX(const int& data){
    x = data;
  }
protected:
  void print_base(){
    cout << "print base!" << endl;
  }
private:
  void f(){}
  int x;
};

class D : protected Base{
public:
  D():y(0){}
  ~D(){}
  void set_data(const int& data){
    y = data;
  }
  void show_d(){
    cout << "show d!" << endl;
    print_base();
  }
protected:
  void print_d(){
    cout << "print d!" << endl;
  }
private:
  int y;
};

class C : public D{
public:
  void show_c(){
    show_base();
  }
};

int main(){
  D d;

  //d.show_base();
  //  b.print_base();
}
