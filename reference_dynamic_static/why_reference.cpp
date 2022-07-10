#include<iostream>
using namespace std;

// int& func(int a){ // bad practice
//     int num = 8;
//     int& ans = num; // local variable
//     return ans;
// }

/*int* fun(int n){  // bad practice
    cout << &n << endl;
    int* ptr = &n;
    return ptr;
}*/
void update(int n){ // pass by value, copy memory generate new memory
    n++;
}
void update2(int& n){ // pass by reference, no created new memory
    n++;
}
int main(){

    int n = 5;
    cout << "Before " << n << endl;
    update2(n);
    cout << "After " << n << endl;
     
    //func(n);
    //cout << fun(n);

    return 0;

}