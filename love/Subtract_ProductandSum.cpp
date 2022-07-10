#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int temp = n;
    int product = 1;
    int rem;
    int sum = 0;

    while (n)
    {
        rem = n%10;
        product = rem * product;
        sum = sum + rem;
        n /=10;
    }
     cout << product << " "<< sum << endl;
    cout << (product - sum) << endl;
}