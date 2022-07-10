#include<iostream>
using namespace std;
int main()
{
    //largest word in a sentences
    int size,count=0,temp=0;
    cin >> size;
    cin.ignore();// as also use fflush()
    char arr[size+1];
                //cin >> arr; No Input Space
    cin.getline(arr,size);
    cin.ignore();
    int st=0,maxst=0;
    for (int i = 0; i < size+1; i++)
    {
       if (arr[i] == 32 || arr[i] == '\0')
       {
           if(temp < count){
           temp = count;
           maxst = st;
           }
           count = 0;
           st = i+1;   
       }
       else{
           count++;
       }
       if (arr[i] == '\0')
       {
           break;
       }  
    }
    cout << temp << endl;
    for (int i = 0; i < temp; i++)
    {
        cout << arr[i+maxst];
    }
}