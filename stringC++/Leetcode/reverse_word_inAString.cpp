// question 186 on leetcode
// Q- reverse word in a string
#include<iostream>
using namespace std;

int countWord(string str,int pos){
    int count = 0;
    while ((str[pos] != ' ') && (str[pos] != '\0'))
    {
        count++;
        pos++;
    }
    return count;
}
void reverse_word(string str){
   int s = 0;
   int it;
   
   while(str[s] != '\0'){
   it = countWord(str,s); //4 //3
  int temp_s = s; //temp_s = 0 //5
  int temp_it= it; // temp_it = 4 //3
  int e = s+it;  // 4//8

   while (s < e)   //(0<4),(1<3),(2<2)//(5<8)//(6,7)
   {
       swap(str[s],str[e-1]);
       s++;  // s =1 // s=2, //s=6 //s =7
       e--;  // e = 3 //e = 2,//e = 7 //e=6
   }
   s = temp_s+temp_it+1;}  //s = 0+4+1=5,//s = 9
   
   cout << str;
}
int main(){

    string str;
    
    getline(cin,str);
    reverse_word(str);
    return 0;

}