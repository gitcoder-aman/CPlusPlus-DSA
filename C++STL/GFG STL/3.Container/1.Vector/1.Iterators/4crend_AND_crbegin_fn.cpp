#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vect = {10,20,30,40,50};

    //for loop with crbegin and crend

    for (auto i = vect.crbegin(); i != vect.crend(); i++)
    {
        cout << *i << endl;
    }
    
    return 0;

}