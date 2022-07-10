#include<iostream>
using namespace std;
//Time complexity = O(2^n) = exponential bekar
//Space Complexity = O(n)
int fib(int n){

    //base condition
    if(n == 0 || n == 1)
    return n;
    
    int result = fib(n - 1) + fib(n - 2);

    return result;
    
}
int main(){

    int n;
    cin >> n;
    cout << fib(n);
    return 0;

}