#include <iostream>
using namespace std;

class Int{
public:
  Int(int d = 0):i(d){}
  Int& operator++(){ //++a
    ++i;
    return *this;
  }
  Int operator++(int){//a++
    Int tmp(i);
    ++i;
    return Int(tmp);
  }
  Int& operator--(){//--a
    --i;
    return *this;
  }
  Int operator--(int){
    Int tmp(i);
    --i;
    return tmp;
  }
private:
  int i;
};

int main(){
  Int i;
  Int a = i++;
  a = ++i;
  a = i--;
  a = --i;
}
