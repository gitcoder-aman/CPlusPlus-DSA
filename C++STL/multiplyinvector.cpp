#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>a{3,2,3};
    int multi = 1;

    for(int i=0; i < a.size(); i++){
        multi *= a[i];
    }
    cout << multi<<endl;

    int count = 0;
  
    while (multi != 0)
    {
        count = count + 1;
        multi = multi >> 1;
    }
    cout << count;
    return 0;

}