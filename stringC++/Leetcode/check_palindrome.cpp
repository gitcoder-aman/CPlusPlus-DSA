#include<iostream>
using namespace std;

bool isChar(char ch){

  if( (ch >= 'a' && ch <= 'z') || (ch >= '1' && ch <= '9')){
      return true;
  }
  else{
      return false;
  }
}
char toLowerCase(char ch){
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else{
       // return ch+32; // ye bhi okk hai
       return ch - 'A' + 'a';
    }
    
}
bool checkPalindrome(char str[],int len){

      int s = 0;
      int e = len - 1;

      while (s < e)
      {
          if (!isChar(tolower(str[s])))
          {
              s++;
          }
          else if (!isChar(tolower(str[e])))
          {
              e--;
          }
          
          else if(toLowerCase(str[s]) == toLowerCase(str[e])){
                s++;
                e--;
          } 
          else{
              return 0;
          }
      }
      return 1;
}

int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}
int main(){

    char str[20];
    cin.getline(str,20);
    int len = getLength(str);
    cout << "Palindrome or not: ";
    cout << checkPalindrome(str,len)<<endl;

    // cout << toLowerCase('b')<<endl;
    // cout << toLowerCase('B')<<endl;

    return 0;

}