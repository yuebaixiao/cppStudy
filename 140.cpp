#include <iostream>
using namespace std;

class Test{
  friend void show(Test&);
public:
  Test(int d = 0):data(d){}
  
private:
  void fun(){}
  int data;
};

void show(Test &t){
  int i = t.data;
  t.fun();
  cout << "friend show" << i << endl;
}
int main(){
  Test t(19);
  show(t);
}
