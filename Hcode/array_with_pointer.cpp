#include<iostream>
using namespace std;

int main(){

    int arr[5]={10,20,30,40,50};
    int *p = arr;
    cout << *(p++)<<endl;
    cout << *(++p);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *p << endl;
    //     p++;
    // }
    
    return 0;

}