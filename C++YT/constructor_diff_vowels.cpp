#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

class string_class{
      
      char str [40];
      public:
      string_class (char ch[]){  //Constructor
          strcpy(str,ch);
      }

      void distinct_vowels(){
          char v[15],ch;
          int i,j = 0,f;

          for (int i = 0; i < strlen(str); i++)
          {
              ch = toupper(str[i]);
              if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
              f = check_vowels(v,ch);
              if(f == 0){
                  v[j] = ch;
                  j++;
                  v[j] = '\0';
               }
              }
          } // end of for loop

          cout << "Distinct Vowels=" << v;
      }
      int check_vowels(char temp[],char ch){

          int i , flag = 0;
          for (int i = 0; i < strlen(temp); i++)
          {
              if (temp[i] == ch)
              {
                  flag = 1;
                  break;
              }
          }
          return flag;        
      }
};
int main(){

    string_class  s("CodeWithAman"); // s go to constructor
    s.distinct_vowels();

    return 0;

}