/*
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    vector<string> vec;

    vec.push_back("first");
    vec.push_back("second");
    vec.push_back("third");
    vec.push_back("fourth");
    vec.push_back("fifth");

    //display the contents
    //cbegin()
    cout << "Contents of the vector through cbegin()"<< endl;
    for (auto itr = vec.cbegin(); itr != vec.end(); itr++)
    {
        cout << *itr << endl;
    }

    //cend()
    cout << "Contents of the vector through cend() "<< endl;
    for(auto itr = vec.cend() - 1; itr >= vec.begin(); --itr){
        cout << *itr << endl;
    }
    return 0;

}