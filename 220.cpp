#include <iostream>
using namespace std;

class B1{
public:
  B1():d(0){};
  int d;
};

class B2{
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
  c.B1::d = 10;
  c.B2::d = 10;
  cout << c.B1::d << endl;
  cout << c.B2::d << endl;

  return 0;
}
