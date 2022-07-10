#include<iostream>
using namespace std;
int main(){
    int i,j,n;

    cout<<"enter no of term"<<endl;
    cin>>n;
    
   /* for ( i = 1; i <= n; i++)
     {
         int k=1;
         for (j = 1; j <= n*2; j++)
         {
             if (j<=i || (n*2-k+1)<j)
             {
                 cout<<"*";
                 k++;
             } 
             else{
                 cout<<" ";
             }  
             
         }
         cout<<endl;
         
     }
     for ( i = n; i >= 1; i--)
     {
         int k=1;
         for (j = 1; j <= n*2; j++)
         {
             if (j<=i || (n*2-k+1)<j)
             {
                 cout<<"*";
                 k++;
             } 
             else{
                 cout<<" ";
             }  
             
         }
         cout<<endl;
         
     } */ // MAM
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=i;j++){
             cout<<"*";
         }
         int space=2*n - 2*i;
         for(int j=1;j<=space;j++){
             cout<<" ";
         }
         for(int j=1;j<=i;j++){
             cout<<"*";
         }
         cout<<endl;
     }
     // Reverse 
     for(int i=n;i>=1;i--)
     {
         for(int j=1;j<=i;j++){
             cout<<"*";
         }
         int space=2*n - 2*i;
         for(int j=1;j<=space;j++){
             cout<<" ";
         }
         for(int j=1;j<=i;j++){
             cout<<"*";
         }
         cout<<endl;
     }
     return 0;
}

