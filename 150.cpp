#include <iostream>
using namespace std;

class Test{
public:
  friend void fun(Test&);
  Test(int d = 0) : data(d){
    ++count;
  }
  ~Test(){
    --count;
  }
  static void show(){
    //cout << data << endl;
    cout << count << endl;
  }
  void pr(){
    show();
    ps();  
  }
  void ps()const{
    //pr();//error
  }
  static void prt(){
    //pr();
    show();
  }
  void list(){
    cout << "list" << endl;
  }
  void list() const{
    cout << "list const" << endl;
  }
private:
  int data;
  static int count;
};

//Init
int Test::count = 0;

void fun(Test &t){
  cout << t.count << endl;
  ++t.count;
  
}

int main(){
  Test t(100);
  const Test t1(200);
  fun(t);
  //  fun(t1);
  t.list();
  t1.list();
}
