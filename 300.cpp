#include <iostream>
using namespace std;

float divs(const int& a, const int& b)throw(int)
{
  if(b == 0){
    long  x;
    throw x;
  }
  return a/b;
}

int main(){
  int a = 10;
  int b = 0;
  try{
    float r = divs(a,b);
    cout << r << endl;
  }
  catch(int){
    cout << "Div err(int)" << endl;
  }
  catch(short){
    cout << "Div err(short)" << endl;
  }
  catch(...){//必须放到最后
  }  
}
