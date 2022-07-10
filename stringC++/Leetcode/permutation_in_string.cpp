#include<iostream>
using namespace std;

// leetcode = 567
bool checkEqual(int a[26],int b[26]){
    for (int i = 0; i < 26; i++)
    {
        if(a[i] != b[i])
        return 0;
    }
    return 1;
}
bool permutation_string(string s1,string s2){
 
       //character count array
     int count1[26] = {0};  // space complexity = O(1)
     for(int i = 0;i < s1.length(); i++){

         int index = s1[i] - 'a';
         count1[index]++;
     }
     //traverse s2 string in window of size s1 length and compare
    int count2[26] = {0};
    int i = 0;
    int windowSize = s1.length();

    //running for first windows
    while (i < windowSize && i < s2.length())  // time complexity = O(m)
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    
     if( checkEqual(count1,count2))
     return true;
     
     // aage window process karo
      while (i<s2.length()) // time complexity = O(n)
      {
          char newChar = s2[i];
          int index = newChar - 'a';
          count2[index]++;

          char oldChar = s2[i - windowSize];
          index = oldChar - 'a';
          count2[index]--;

          i++;

          if( checkEqual(count1,count2));
          return 1;
      }
      
     return 0;
}
int main(){

    string s1 = "ab";
    string s2 = "eidboaooo";
    cout << permutation_string(s1,s2);

    return 0;

}