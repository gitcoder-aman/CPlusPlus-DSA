#include<iostream>
#include<string>
using namespace std;

// leetcode problem = 608 also take question
// this question on 125 number on leetcode
bool isvalidChar(char ch){
       if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z')){
           return 1;
       }
           return 0;    
}
bool checkPalindrome(string a){
    
    int st = 0;
    int e = a.length()-1;

    while(st < e){
        if(a[st] == a[e]){
              st++;
              e--;
        }
        else{
           return 0;
        }
    }
    return 1;
}
bool validString(string str){
       
       //faltu character hata do
     string temp = "";
     
     for(int j = 0; j < str.length(); j++){
         if(isvalidChar(str[j])){
             temp.push_back(tolower(str[j]));
         }
     }
      // check Palindrome
     return checkPalindrome(temp);
}
int main(){

    string str;
    getline(cin,str);

    cout << validString(str) << endl;
    return 0;
}