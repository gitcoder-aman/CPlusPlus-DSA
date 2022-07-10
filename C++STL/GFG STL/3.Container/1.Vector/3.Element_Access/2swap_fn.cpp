#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v1 = {100,100,100};
    vector<int> v2 = {200,200,200,200};

    v1.swap(v2);

    cout << "The v1 vector Contains " << endl;

    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }cout <<  endl;
    
    cout << "The v2 vector Contains "<< endl;

    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }cout <<  endl;
    return 0;

}