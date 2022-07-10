#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n+1];
    cin >> arr;

    // check palindrome
  
  int flag=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            flag=1;
            cout << "Not Palindrome String";
             break;
        }
        
    }
    if (flag==0)
    {
       cout << "Palindrome String";
    }   
}