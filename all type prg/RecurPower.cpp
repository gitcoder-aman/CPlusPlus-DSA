#include<iostream>
using namespace std;
int RecurPower(int n,int p){

    if(p==0){
        return 1;
    }
    int Prevpower = RecurPower(n,p-1);
    return (n*Prevpower);
}
int main()
{
    int n,p;
    cin >> n >>p;
    cout << RecurPower(n,p)<<endl;
    return 0;
}
