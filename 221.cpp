#include <iostream>
using namespace std;

class B0 {
public:
  B0() : m(0){}
public:
  int m;
};
class B1 : virtual public B0{
public:
  B1():d(0){};
  int d;
};

class B2 : virtual public B0{
public:
  B2():d(0){};
  int d;
};

class D : public B1, public B2{
public:
  D():x(0){}
private:
  int x;
};

int main(){
  D c;
  c.m = 100;
  cout << c.B1::m << endl;
  cout << c.B2::m << endl;
  return 0;
}
