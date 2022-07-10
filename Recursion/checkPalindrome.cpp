#include<iostream>
using namespace std;
bool checkPalindrome(int i,int j,string& str){
    
    //base case
    if(i > j)
    return true;

    if(str[i] != str[j])
    return false;
    else{
        // Recursive call
        return checkPalindrome(i+1,j-1,str);
    }

}
int main(){

    string str = "racecar";
   bool isPalindrome = checkPalindrome(0,str.length()-1,str);

   if(isPalindrome){
       cout << "Its a Palindrome "<< endl;
   }
   else{
       cout << "Its not a Palindrome "<< endl;
   }
    return 0;

}