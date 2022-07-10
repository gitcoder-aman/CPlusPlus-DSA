#include<iostream>
using namespace std;
int RecurAdd(int n){

    if(n==0){
        return 0;
    }
    int prevSum;
    prevSum = RecurAdd(n-1);
    return (n+prevSum);
}
int main()
{
    int n;
    cin >> n;
    cout << RecurAdd(n)<<endl;
    return 0;
}