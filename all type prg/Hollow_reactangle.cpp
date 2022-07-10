#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
cout<<"Enter row and column"<<endl;
cin>>row>>col;

    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if (i==1 || i==row || j==col ||j==1)
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