#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    int arr[m][n];
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n ;j++)
        {
            cin >> arr[i][j];
        }
    }
    int se;
    cout << "Enter Searching for Element";
    cin >> se;
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == se)
            {
                cout << "Element Found" << se;
                return 0;
            }
            
        }
        
    }
    cout << "Element Not Found";
    
}