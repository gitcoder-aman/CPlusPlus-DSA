#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& ch){

    // space complexity = O(1)
    // time complexity = O(n)
   int i = 0;
   int ansIndex = 0;
   while (i < ch.size())  // ch.size() = 7;
   {
       int j = i + 1;
       while (j < ch.size() && ch[i] == ch[j])
       {
           j++;
       }
            // yaha kab aayega
            // ya toh vector poora traverse kardia
            // ya fer new/Different character encounter kia hai

       ch[ansIndex++] = ch[i]; // character store in itself
        
        int count = j - i;
        if(count > 1){

         //converting counting into single digit and solving in answer
         string cnt = to_string(count);

         for(char chars: cnt){
            ch[ansIndex++] = chars;
         }
        }
            //moving to new/Different Character
       i = j;
   }
   return ansIndex;
}
int main(){

    vector<char> ch{'a','a','b','b','c','c','c'};  // given array of character
     cout<< compress(ch);

    return 0;

    // Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
}