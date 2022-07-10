#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s="498723659";
    sort(s.begin(),s.end(),greater<int>());// int or char
    cout << s << endl;
    return 0;
}