#include<iostream>
using namespace std;
// leetcode-1910
string removeOcc(string s,string part){

    while (s.length() != 0 && s.find(part) < s.length() )
    {
        s.erase(s.find(part),part.length()); //erase (iterator first, iterator last);
    }
    return s;
}
int main(){

    string str = "daabcbaabcbc";
    //getline(cin,str);
    string remove_part = "abc"; 
    cout << removeOcc(str,remove_part);
    return 0;

}