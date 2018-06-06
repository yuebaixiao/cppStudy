#include <iostream>
using namespace std;

template <typename T>
class Stack{
public:
  Stack(int sz = STACK_SIZE){
    cap = sz > STACK_SIZE ? sz :  STACK_SIZE;
    data = new T[cap];
    top = 0;
  }
  ~Stack(){
    delete []data;
    data = NULL;
    cap = top = 0;
  }
  bool isFull() const{
    return top >= cap;
  }
  bool push(const T& t){
    if(isFull()) return false;
    data[top++] = t;
    return true;
  }
private:
  enum{STACK_SIZE = 8};
  T *data;
  size_t cap;
  size_t top;
};

int main(){
  Stack<int> s;
}
