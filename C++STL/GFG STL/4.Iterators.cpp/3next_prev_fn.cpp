/*4. next() :- This function returns the new iterator that the iterator would point after 
advancing the positions mentioned in its arguments.

5. prev() :- This function returns the new iterator that the iterator would point after 
decrementing the positions mentioned in its arguments.*/


#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){

    vector<int>arr = {10,20,30,40,50};

    //Decalring iterators to a vector
    
    vector<int>::iterator pit = arr.begin();
    vector<int>::iterator fit = arr.end();

    //using next() to return new iterator

    //point to 4

    auto it = next(pit,3);

    //using next() to return new iterator

    //point to 4
    auto it1 = prev(fit,3);

    //Displaying iterator position
    cout<< "The Position of new iterator using next() is :" << endl;
    cout << *it << " " << endl;

    //Displaying iterator position
    cout << "The Position of new iterator using prev() is "<< endl;
    cout << *it1 << " " << endl;

    return 0;

}