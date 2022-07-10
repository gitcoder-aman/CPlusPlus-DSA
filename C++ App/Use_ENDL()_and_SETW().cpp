#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=12,b=123,c=1234;
    cout << "without using setw()" << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    cout << "With using setw()"<<endl;
    cout << setw(7) << a << endl;
    cout << setw(7) << b << endl;
    cout << setw(7) << c << endl;
}