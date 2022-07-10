/*
Sets are a type of associative containers in which each element has to be unique because 
the value of the element identifies it.
*/
/*Properties:

The set stores the elements in sorted order.
All the elements in a set have unique values.
The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
Sets follow the Binary search tree implementation.
The values in a set are unindexed.*/

#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main(){

    //empty set container

    set<int,greater<int>>s1;

    //insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    //only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);

    set<int,greater<int>>::iterator itr;

    cout << "The set s1 is : "<< endl;

    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }cout << endl;
    
    //assigning the elements from s1 to s2
    set<int>s2(s1.begin(),s1.end());

    cout << "The set s2 after assign from s1 is :"<< endl;
    for(itr = s2.begin(); itr != s2.end(); itr++){
        cout << *itr << " ";
    }cout << endl;

    //remove all elements up to 30 in s2

    cout << "after removal of elements less than 30 "<< endl;
    s2.erase(s2.begin(),s2.find(30));
    
    for(itr = s2.begin(); itr != s2.end(); itr++){
        cout << *itr << " ";
    }cout << endl;

    //remove element with value 50 in s2
    int num;
    num = s2.erase(50);

    cout << "s2.erase(50) "<< endl;
    cout << num << " removed "<<endl;
     
    for(itr = s2.begin(); itr != s2.end(); itr++){
        cout << *itr << " ";
    }cout << endl;

    //lower bound and upper bound for set s1

    cout << "s1.lower_bound(40) "<< endl;
    cout << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) "<< endl;
    cout << *s1.upper_bound(40) << endl;

    return 0;

}