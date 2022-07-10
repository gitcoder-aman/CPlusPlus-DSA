#include<iostream>
using namespace std;
int main()
{
    int i,j,n,loop=1;
    cout<<"Enter No of term";
    cin>>n;
//   int p=1;
//     for(i=1;i<=n;i++){
//        for(j=1;j<=n-i;j++){
//            cout<<" ";
//        }
//        for(int k=1;k<=loop;k++){
//            if(k<=i){
//                 cout<<p;
//                 if(k<i)
//                 p--;
//            }
//            else{
//                p++;
//                cout<<p;
//            } 
//        }
//        loop+=2;
//        p++;
//        cout<<endl;
//     }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  "; 
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
