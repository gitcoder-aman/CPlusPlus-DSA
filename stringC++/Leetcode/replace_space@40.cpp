#include<iostream>
using namespace std;
// codestudio
string replace_space(string s){

      // string temp = "";
    for(int i = 0;i < s.length() ; i++){ // time and space complexity = O(n)

          if(s[i] == ' '){
            //  s.push_back('@');
            //  s.push_back('4');
            //  s.push_back('0');
            s.replace(i,1,"@40");
            
          }
        //   else{
        //       s.push_back(s[i]);
        //   }
    }
    return s;
}

int main(){

    string str;
    getline(cin,str);
   cout << replace_space(str);
    return 0;

}