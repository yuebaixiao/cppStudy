#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int ar[] = {123,123,43,45,63,43,2,3};
  ofstream ofile1;
  ofile1.open("./test.txt");
  if(!ofile1){
    cerr << "open err" << endl;
    exit(1);
  }
  for(int i = 0; i < sizeof(ar) / sizeof(int); ++i){
    ofile1 << ar[i] << " ";
  }
  ofile1.close();
}
