#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    cout << "a&b" << (a&b) << endl;
    cout << "a|b" << (a|b) << endl;
    cout << "~a" << ~a << endl;
    cout << "a^b" << (a^b) << endl;
    
    cout << (17 >> 1) << endl;  // 2 divided
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;  // 2 Multiply
    cout << (21 << 2) << endl;
}