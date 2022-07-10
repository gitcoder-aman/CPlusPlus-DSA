#include<iostream>
using namespace std;

int unique(int arr[],int size)
 {
      int ans;
             for (int i = 0; i < size; i++)
             {
                  int flag = 0;
                  for (int j = 0; j < size; j++)
                   {
                      if(i!=j){
                      if(arr[i] == arr[j])
                       {
                          flag = 1;
                         break;
                       }
                              }   
                    }
               
                    if(flag == 0){
                     ans = arr[i];
                      break;}
      
             }
             return ans;
 }
int main(){

     int arr[15];
     int size;
     int itrate;
     cin >> itrate;

     for(int i = 1 ; i <= itrate; i++)
     {
         cin >> size;
        for (int i = 0; i < size; i++)
        {
          cin >> arr[i];
        }
     
       cout << unique(arr,size) << " ";
     }
    return 0;

}