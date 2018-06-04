#include <iostream>
using namespace std;

class Test{
public:
  Test(int d = 0):data(d){

  }
  Test(const Test &t){
    data = t.data;
  }
  Test& operator=(const Test &t){
    if (this != &t){
      data = t.data;
    }
    return *this;
  }
  ~Test(){

  }
private:
  int data;
};

int main(){

}
