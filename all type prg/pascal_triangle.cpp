#include<iostream>
using namespace std;
int main()
{
    int i,j,n ;
    int coef=1;
    cout<<"Enter no of term";
    cin>>n;
    for(i=0;i < n;i++){
      for(int space=1;space<=n-i;space++){
          cout<<" ";
      }
      for(j=0;j<=i;j++){
          if (i==0 || j==0)
          {
              coef=1;
          }else{
              coef=coef * (i-j+1)/j;
          }
          cout<<coef<<" ";
          
      }
        cout<<endl;
    }
    
}

//      1 
//     1 1 
//    1 2 1 
//   1 3 3 1 
//  1 4 6 4 1