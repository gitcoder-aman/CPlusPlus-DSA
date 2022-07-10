#include<iostream>
using namespace std;

void reverse_string(int i,string& str){
     
     cout << "call recieved for "<< str << endl;
     //base case
     int n = str.length();
      if(i > n-i-1)
      return; 

      swap(str[i],str[n-i-1]);
      i++;
    //j--;
      //Recursive call
      reverse_string(i,str);

}
int main(){

    string str = "codeWithaman";
    int i = 0;//j = str.length()-1;
    reverse_string(i,str);

    cout << str << endl;
    return 0;

}