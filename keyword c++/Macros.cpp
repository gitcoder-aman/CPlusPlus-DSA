//Macro - A piece of code in a program that is replaced by value of macro
#include<iostream>
using namespace std;

//https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/
//macro defination
#define pi 3.14 // it's not a variable not takes memory

//Chain Macros
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// Multi-line Macros
#define ELE 1,\
            2,\
            3
//Function-like Macro defination
#define min(a,b) (((a) < (b)) ? (a) : (b))

int main(){

    int r = 5;
    //double pi = 3.14 // this keyword takes 8 bytes memory
    int area = pi * r * r;
    cout << "Area is "<< area << endl;

    cout << "Geeks for Geeks have " << INSTAGRAM << "K Followers on Instagram!" << endl;
    
    //multi-line macros
    // Array arr[] with elements
    int arr[] = { ELE };
    cout << "Element of array are:"<<endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }cout <<endl;

    //function - like Macro 
    int a = 18;
    int b = 76;

    cout << "Minimum value between "<< a << " and " <<b <<" is "<<min(a,b);
    return 0;

}