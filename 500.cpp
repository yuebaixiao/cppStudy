#include <iostream>

using namespace std;

class Test{
public:
  explicit Test(int d = 0, int s = 1){
    cout << this <<endl;
    data = d;
    b = s;
  }
  ~Test(){
    cout << this << endl;
  }
  operator int(){
    return data;
  }
private:
  int b;
  int data;
};

int main(){
  Test t;
  t = (Test){100,2};
  int va;
  va = t;
  int* p = &va;
  int* &a = p;
  *a = 101;
  
  cout << "va: " << va << endl;
  return 0;
}
