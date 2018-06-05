#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream ifile("./test.txt", ios::in | ios::binary);
  if(!ifile){
    cerr << "open err" << endl;
  }
  int index;
  int value;
  while(1){
    cin >> index;
    ifile >> value;
    cout << value << endl;
  }
}
/*
int main(){
  ifstream ifile("./test.txt", ios::in);
  if(!ifile){
    cerr << "open err" << endl;
  }
  int index;
  int value;
  while(1){
    cin >> index;
    ifile.seekg(index, ios::beg);
    ifile >> value;
    cout << value << endl;
  }
}
/*
int main(){
  int ar[10];
  ifstream ifile("./text2.txt",ios::in | ios::binary);
  if(!ifile){
    cerr << "open err" << endl;
  }
  ifile.read((char*)ar, sizeof(ar));
  ifile.close();
}
/*
int main(){
  int ar[] = {11,232,123123,1223,455,4,4,5,56,4,33};
  ofstream ofile("./text2.txt", ios::out | ios::binary);
  if(!ofile){
    cerr << "open err" << endl;
  }
  ofile.write((char*)ar, sizeof(ar));
  ofile.close();
}
/*
int main(){
  int ar[10];
  ifstream ifile("./test.txt",ios::in);
  if(!ifile){
    cerr << "open err" << endl;
    exit(1);  
  }
  for(int i = 0; i < 10; ++i){
    //用空格分割读进数组
    ifile >> ar[i];
  }
  cout << *ar << endl;
}

/*
int main(){
  int ar[] = {1123,123,43,45,63,43,2,3};
  ofstream ofile1("./test.txt", ios::out);
  //ofile1.open("./test.txt");
  if(!ofile1){
    cerr << "open err" << endl;
    exit(1);
  }
  for(int i = 0; i < sizeof(ar) / sizeof(int); ++i){
    ofile1 << ar[i] ;
  }
  ofile1.close();
}
*/
