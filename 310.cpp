#include <iostream>
#include <string>

using namespace std;

template <typename Y>
class PushFull{
public:
  PushFull(const char* s, Y val) : str(s), value(val){
  }
  ~PushFull(){
  }
  void what(){
    cout << str << endl;
    cout << "value:" << value << endl;
  }
private:
  string str;
  Y value;
};

class PopEnd{
public:
  PopEnd(const char* s) : str(s){}
  ~PopEnd(){}
  void what(){
    cout << str << endl;
  }
private:
  string str;
};

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
    if(isFull()) {
      throw PushFull<T>("stack is full", t);
      return false;
    }
    data[top++] = t;
    return true;
  }
  bool isEnd(){
    return top <= 0;
  }
  T& pop(){
    if(isEnd()){
      throw PopEnd("stack is end");
      return data[0];
    }
    return data[--top];
  }
  void show(){
    for(int i = top - 1; i >= 0; --i){
      cout << data[i] << endl;
    }
  }
private:
  enum{STACK_SIZE = 8};
  T *data;
  size_t cap;
  size_t top;
};

int main(){
  Stack<int> s;
  try{
    for(int i = 1; i <= 8; ++i){
      s.push(i);
    }
  }
  catch(PushFull<int>& e){
    e.what();
  }
  //s.show();
  try{
    for(int i = 1; i <= 18; ++i){
      int p = s.pop();
      cout << p << endl; 
    }
  }
  catch(PopEnd& e){
    e.what();
  }
}
