// geekforgeeks
#include<iostream>
#include<string>
using namespace std;

// time complexity of this program is O(n)
char getMaxOccCharacter(string s){

    int arr[26] = {0};  // space complexity = constant space O(1)
 
    // create an array of count of characters
    for(int i =0 ;i<s.length() ; i++){
     // this complexity of loop is O(n)
      
         char ch = s[i];
        // //lowercase
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';  // actual index of character find 
        }
        else{//uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }
    //   for(int i = 0 ;i < 26;i++){
    //   cout << arr[i] << " ";
    // }
    int maxi_OccTime = -1,arr_index = 0;
    for (int i = 0; i < 26; i++)
    { 
        // this  complexity of loop is O(1) because fixed iteration
        if(maxi_OccTime < arr[i]){  // highest frequency according
            arr_index = i;
            maxi_OccTime = arr[i];
        }
    }
    char finalAns = arr_index+'a';
   
    return finalAns;  
    
}

int main(){

    string str;
    getline(cin,str);

    cout << getMaxOccCharacter(str);
    return 0;

}