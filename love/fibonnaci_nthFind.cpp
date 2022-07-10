#include<iostream>
using namespace std;
int fib(int x){
 
   int f1 = 0;
   int f2 = 1,f3;
   if(x >= 3){
    for (int i = 3; i <= x; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f3;}
   
    else if(x == 1)
    return 0;
    else
    return 1;

}
int main(){

    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}