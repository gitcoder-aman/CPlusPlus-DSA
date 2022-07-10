//Input Sorted Order Matrix
#include<iostream>
using namespace std;
int main()
{
    int n1,n2; cin >> n1 >> n2;
    int target; cin >> target;
    int arr[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr[i][j];
        }
    }
     int r = 0,c = n2-1;
     bool found = false;
     while (r < n1 and c >= 0)
     {
         if (arr[r][c] == target)
         {
              found = true;
         }
         if (arr[r][c] > target)
         {
             c--;
         }
         else{
             r++;
         }
     }
     if (found)
     {
        cout << "Element Found"; 
     }
     else{
         cout << "Element doesn't Exit";
     }
}