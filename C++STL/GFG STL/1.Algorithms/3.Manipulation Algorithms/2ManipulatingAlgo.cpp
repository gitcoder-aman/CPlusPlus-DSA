/*1.arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
2.arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.
3.next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
4.prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation. 
5.distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int arr[]  = {5,10,15,20,20,23,42,45};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int>vect(arr,arr+n);

    cout << "vector is "<< endl;
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
    }
 //1.   //Delete second element of vector
    vect.erase(vect.begin()+1);

    cout << "Vector after erasing the element "<< endl;
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }cout << endl;
 //2.   
    cout << "Delete the duplicate occurrence " << endl;
    vect.erase(unique(vect.begin(),vect.end()),vect.end());

     for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    return 0;

}