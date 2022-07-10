#include<iostream>
#include<array>    //for array, at()
#include<tuple>    //for get()
using namespace std;

int main(){

    array<int,6> arr = {1,2,3,4,5,6};

    cout << "The array elements are (using at()) : "<< endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr.at(i) << " ";
    }cout << endl;

    cout << "The array elements are (using get()) :"<< endl;
    cout << get<0>(arr) << " " << get<1>(arr) << " ";
    cout << get<2>(arr) << " " << get<3>(arr) << " ";
    cout << get<4>(arr) << " " << get<5>(arr) << " ";
    cout << endl;
    
    cout << "The array elements are (using operator[]) "<< endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
    return 0;

}