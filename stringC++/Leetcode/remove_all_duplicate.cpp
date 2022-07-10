#include<iostream>
using namespace std;
// leetcode = 1047
void remove_double(string s){
     
     int count[26] = {0};
     for(int i = 0;i < s.length(); i++){
        
        int Index = s[i] - 'a';
        count[Index]++;
     }
     for (int i = 0; i < 26; i++)
     {
         if(count[i] > 1){
             count[i] %= 2;   // remainder of 2 
         }
     }
     for (int  i = 0; i < 26; i++)
     {
         if(count[i] == 1){
             cout << char(i + 'a');  //typecasting use
         }
     }
}
int main(){

    string str = "abbacag"; // output = ac
    remove_double(str);
    return 0;

}