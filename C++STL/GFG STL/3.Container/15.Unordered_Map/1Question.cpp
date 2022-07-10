#include<iostream>
#include<unordered_map>
using namespace std;

/*  Given N strings and Q queries. In each query you are given
a string print frequency of that string*/
int main(){

    unordered_map<string,int>m;
    int n;
    cout << "Enter No . of term for inputing in map"<< endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    int q; //query
    cout << "Enter No. of query " << endl;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
    
    

    return 0;

}