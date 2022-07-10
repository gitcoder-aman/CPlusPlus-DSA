#include<iostream>
#include<string>
using namespace std;

// leetcode = 1047
string removeDuplicates(string s) {


     //substr = cutting in the string ex-> substr (size_t pos = 0, size_t len = npos)
      int i = 0, n = s.length();
        for (int j = 0; j < n; j++, i++) {

            s[i] = s[j];
            if (i > 0 && (s[i - 1] == s[i])) // count = 2
                i -= 2;
               // cout<<s<<endl;
        }
        return s.substr(0, i);

 }

int main(){
   string str;
   str = "abbaca"; //output = bb remove then aaca// aa remove then (ca) ans.
   cout << removeDuplicates(str);
}