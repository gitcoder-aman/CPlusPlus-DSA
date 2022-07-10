#include<iostream>
using namespace std;

// formula for gcd = gcd(a%b,b) or gcd(a-b,b)
//Euclid’s GCD Algorithm:
// link = https://www.codingninjas.com/blog/2020/07/25/explained-euclids-gcd-algorithm/
int gcd(int a,int b){

    if(a == 0)
    return a;
    if(b == 0)
    return b;

    while (a != b)
    {
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}
int main(){

    int a,b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a,b);
    cout << ans;
    return 0;

}