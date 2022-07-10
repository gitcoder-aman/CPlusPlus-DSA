#include<iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

     int count = 0;
     while (n!=0)
     {
         // checking last Bit
         if (n & 1)
           {
              count++;
          } 
          n = n >> 1;
     }

    cout << count;
}