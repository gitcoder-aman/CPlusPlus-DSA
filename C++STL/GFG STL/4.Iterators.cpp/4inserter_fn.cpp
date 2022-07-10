#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){

    vector<int> arr = {1,2,3,4,5};
    vector<int> arr1 = {10,20,30};

    //Declaring iterator to a vector
    vector<int>:: iterator it = arr.begin();

    //using advance to set position
    advance(it,3);
    
    //Copying 1 vector elements in other using itereter()
    //insert arr1 after 3rd position in arr
    copy(arr1.begin(),arr1.end(),inserter(arr,it));
    //Displaying new vector elements
    cout << "The new vector after inserting element is " <<endl;
    for(int& x : arr)
    cout << x << " ";

    return 0;

}