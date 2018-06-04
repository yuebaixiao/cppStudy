#include <iostream>
using namespace std;

class Com;
ostream& operator<<(ostream& out, const Com& c);
istream& operator>>(istream& in, Com &c);
Com operator+(int i, const Com &c);

class Com{
  friend ostream& operator<<(ostream& out, const Com& c);
  friend istream& operator>>(istream& in, Com& c);
  friend Com operator+(int i, const Com &c);
public:
  Com():real(0),imag(0){}
  Com(int i, int j = 1):real(i), imag(j){}
  ~Com(){}
  void print(){
    cout << "(" << real << ", " << imag << ")" <<endl;
  }
  Com operator+(const Com &c){
    return Com(real + c.real, imag + c.imag);
  }
  Com operator+(int i){
    return Com(real + i, imag);
  }
  Com operator-(const Com &c){
    return Com(real - c.real, imag - c.imag);
  }
  ostream& operator<<(ostream& out){
    out << real << ", " << imag << endl;
    return out;
  }
private:
  int real;
  int imag;
};

ostream& operator<<(ostream& out, const Com& c){
  out << c.real << ", " << c.imag << endl;
  return out;
}
istream& operator>>(istream& in, Com& c){
  cin >> c.real >> c.imag;
  return in;
}
Com operator+(int i, const Com &c){
  return Com(i + c.real, c.imag);
}

int main(){
  /*
  Com c;
  Com c1(1,2);
  Com c2(3,4);
  c1.print();
  c2.print();
  Com c3 = c1 + c2;
  c3.print();
  Com c4 = c1.operator+(c2);
  c4.print();
  Com c5 = c1.operator-(c2);
  c5.print();
  */
  
  Com c;
  Com c1(1,2);
  Com c2(3,4);
  Com c3 = c1 + 10;
  c3 = 3 + c1;
  cout << c3;
  c3 << cout;

  Com c4;
  cin >> c4;
  cout << c4;
}
