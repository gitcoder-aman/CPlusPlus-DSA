// Default Argument in function
#include<iostream>
using namespace std;
int add(int ,int ,int=0);
int main(){

int a,b,c;
cout<<"Enter Two Number";
    cin >> a;
    cin >> b;
 cout<<add(a,b);
//  cout << "Enter three number";   
//     cin >> a>>b>>c;
//     cout<<add(a,b,c);
}
int add(int x,int y,int z){
    return(x+y+z);
}