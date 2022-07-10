#include<iostream>
using namespace std;

void counting1(int n){
       
    //base case
    if(n == 0)
     return;

     cout << n << endl;

     counting1(n-1);   // tail recursion
}
void counting2(int n){
       
    //base case
    if(n == 0)
     return;

     counting2(n-1); // Head recursion // recursive relation

     cout << n << endl;
}
int main(){

    int n;
    cin >> n ;
    cout << endl;
  //  counting1(n);
     counting2(n);
    return 0;

}