#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/
int main(){

    string st = "Aman Bhai";
    string st2;
   //out and in just any take name 
    //opening files using constructor and writing it
    ofstream out("sample.txt"); // write operation
    out << st;

    //opening files using construstor and reading it
    ifstream in("sample.txt");//Read operation
   // in >> st2;
   getline(in,st2);
    cout << st2;
    return 0;


}