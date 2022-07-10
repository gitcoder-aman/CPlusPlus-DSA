/*1.sort(first_iterator, last_iterator) – To sort the given vector.
2.reverse(first_iterator, last_iterator) – To reverse a vector.
3.*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
4.*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
5.accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
6.count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
7.find(first_iterator, last_iterator, x) – Returns an iterator to the first occurence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector.
8.binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
9.lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which         has a value not less than ‘x’.
10.upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last)                  which has a value greater than ‘x’. 

*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>      // for accumulate operation
#include<map>
#include<set>
using namespace std;

int main(){

    int arr[] = {10,20,5,23,42,15};

    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int>vect(arr,arr+n);

    cout << "vector is " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " "<<endl;
    }
    //sorting the vector in acending order

    sort(vect.begin(),vect.end());

    cout << "Vector after sorting is :"<< endl;

    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " "<<endl;
    }
    //Reversing the vector
    
    reverse(vect.begin(),vect.end());

    cout << "Vector after reversing is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " "<<endl;
    }

    cout << "Maximum element of vector is: "<< endl;
    cout << *max_element(vect.begin(),vect.end())<< endl;

    cout << "Minimum element of vector is: "<< endl;
    cout << *min_element(vect.begin(),vect.end())<< endl;

    //Starting the summation from 0

    cout << "The summation of vector elements is :"<< endl;
    cout << accumulate(vect.begin(),vect.end(),0)<<endl;

    //To count the occurrences of x in vector

    cout << "Occurrence of 20 in vector" << endl;

    cout << count(vect.begin(),vect.end(),20)<< endl;

    // find() returns iterator to last address if
    // element not present

    find(vect.begin(),vect.end(),5) != vect.end() ? cout << "Element Found ": cout << "Element Not Found ";cout << endl;
    
    // this funciton is work to time complexit O(log n)
    // lower_bound(first_iterator, last_iterator, x)
    // upper_bound(first_iterator, last_iterator, x)
    int a[] = {5,10,15,20,20,23,42,45};
    int size = sizeof(a)/sizeof(a[0]);

    vector<int>v(a,a+size);
    sort(v.begin(),v.end());
    
    cout << "According to vector "<< endl;
    //Returns the iterator first occurrence of 
    auto q = lower_bound(v.begin(),v.end(),6);

    //Returns the iterator last occurrence of 23
    auto p = upper_bound(v.begin(),v.end(),23);
     
    cout << "The lower bound is at position "<< endl;
    cout<< (*q) << endl;

    cout << "The upper bound is at position "<< endl;
    cout<< (*p) << endl;

    cout << "According to array "<< endl;
    
    int *ptr1 = lower_bound(a,a+n,23); // this function is return actual iterator . when element is not present in array then return 1+ iteraor.
    cout << "The lower bound is at position "<< endl;
    cout << (*ptr1) << endl;
    int *ptr2 = upper_bound(a,a+n,23); // this function is always return 1+ iterator
    cout << "The upper bound is at position "<< endl;    
    cout << (*ptr2) << endl;

    cout << "According to Set/Map "<< endl;

    set<int>s(a,a+size);
    map<int,int>m;

        // auto it = lower_bound(s.begin(),s.end(),6); // this type is not use in SET/MAP because this type is function use then time complexity O(n)
        auto it = s.lower_bound(6); // this type of use SET/MAP this function is time complexity = O(log n) this is best.
        cout << (*it) << endl;

    
    return 0;

}