#include<iostream>
using namespace std;
int main(){
    int i,j,n ;
       cout<<"Enter term";
       cin >> n;
    for ( i = 1; i <= n ; i++)
    {
        for(j= 1; j<=n ; j++){
            if (j==1 || j==n || i==j || (i+j==n+1))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
           
            
            
        }
        cout<<endl;
    }
    
}