//empty() – Returns whether the container is empty.
#include<iostream>
#include<vector>
using namespace std;

void summation(vector<int>&v){

   int sum = 0;
    while (!v.empty())
    {
        sum = sum + v.back();
        v.pop_back();
    }
    cout << sum << endl;
}
int main(){

    vector<int>v = {1,2,3,4,5};

    if (v.empty())
    {
        cout << "Vector is empty " << endl;
    }
    else{
        cout << "Vector is not empty " << endl;
    }

    summation(v);
    return 0;

}