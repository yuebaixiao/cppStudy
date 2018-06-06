#include <iostream>
#include <fstream>
using namespace std;

class C{
  friend ostream& operator<<(ostream&, const C&);
public:
  C() : shi(0), xu(0){
    ifstream ifile("./data.dat", ios::in);
    if(!ifile){
      cerr << "open err" << endl;
      exit(1);
    }
    ifile >> shi >> xu;
    ifile.close();
  }
  C(int i, int j) : shi(i), xu(j){}
  ~C(){
    ofstream ofile("./data.dat", ios::out);
    if(!ofile){
      cerr << "open err" << endl;
      exit(1);
    }
    ofile << shi << " " << xu;
    ofile.close();
  }
  void setC(int i, int j){
    shi = i;
    xu = j;
  }
private:
  int shi;
  int xu;
};

ostream& operator<<(ostream& out, const C& c){
  out << "(" << c.shi << "," << c.xu << ")";
  return out;
}
int main(){
  C c;
  cout << c << endl;
  c.setC(10,22);
  cout << c << endl;
}
