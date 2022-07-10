#include<iostream>
#include<forward_list>
using namespace std;

int main(){

    forward_list<int>flist1;

    forward_list<int>flist2;

    flist1.assign({1,2,3});
    
    //Assinging repeating values using assign()
    //5 elements with value 10
    flist2.assign(5,10);

    cout << "The elements of first forward list are :"<< endl;

    for(int& a : flist1)
    cout << a <<" ";
    cout << endl;

    cout << "The elements of second forward list are :"<< endl;

    for(int& b : flist2)
    cout << b <<" ";
    cout << endl;

    return 0;

}