#include <iostream>
#include <cstring>
//#include <string.h>
using namespace std;


void* operator new(size_t sz){
  cout << "new:" << sz << endl;
  void* p = malloc(sz);
  return p;
}
void operator delete(void* p){
  cout << "delete" << sizeof(p) << endl;
  free(p);
}

void* operator new[](size_t sz){
  cout << "new[]:" << sz << endl;
  void* p = malloc(sz);
  return p;
}
void operator delete[](void* p){
  cout << "delete[]" << sizeof(p) << endl;
  free(p);
}

class String{
  friend ostream& operator<<(ostream&, const String&);
public:
  String(const char* str = ""){
    cout << "create obj" << endl;
    if(str == NULL){
      data = new char[1];
      data[0] = '\0';
    }
    else {
      data = new char[strlen(str) + 1];
      strcpy(data, str);
    }
  }
  ~String(){
    cout << "free obj" << endl;
    delete []data;
    data = NULL;
  }
 
void* operator new(size_t sz){
  cout << "self new:" << sz << endl;
  void* p = malloc(sz);
  return p;
}
void operator delete(void* p){
  cout << "self delete" << sizeof(p) << endl;
  free(p);
}

void* operator new[](size_t sz){
  cout << "self new[]:" << sz << endl;
  void* p = malloc(sz);
  return p;
}
void operator delete[](void* p){
  cout << "self delete[]" << sizeof(p) << endl;
  free(p);
}
void* operator new(size_t sz, String* begin, int pos){
  cout << "place new" << sizeof(sz) << endl;
  return &begin[pos];
}

private:
  char* data;
};

ostream& operator<<(ostream& out, const String& s){
  out << s.data;
  return out;
}

void* operator new(size_t sz, String* begin, int pos){
  cout << "place new" << sizeof(sz) << endl;
  return &begin[pos];
}


int main(){
  // String *s = new String("hello");
  //cout << *s << endl;
  //delete s;

  
  //String *s1 = (String*)operator new(sizeof(String));
  //new(s1)String("hhhh");

  //s1->~String();
  //operator delete(s1);

  String s[2];
  new(s,0)String("11");
  new(s,1)String("22");
  delete &s;//?

  //void* p = new String("22");
  //delete (String*)p;

  //String *a = new String[2];
  //delete []a;
  //String *a1 = new String("22");
  //delete a1;

  return 0;
}
