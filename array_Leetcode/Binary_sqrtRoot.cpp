#include<iostream>
using namespace std;

long long int binary_sqrt(int x){

     int start = 0;
     int end = x;
     long long int mid = start + (end - start)/2;
     long long int ans = 0;
     while (start <= end)
     {
         if((mid * mid) == x){
             return mid;
         }
         if((mid * mid) > x){
            end = mid - 1;     
         }
         else{
             start = mid + 1;
             ans = mid;
         }
          mid = start + (end - start)/2;
     }
     return ans;
}
double morePrecision(int n,int Precision,int temp_sol){

    double factor = 1;
    double ans = temp_sol;

    for (int i = 0; i < Precision; i++)
    {
        factor = factor/10;
        for (double j = ans; (j * j) < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main(){
 
     int n;
  //  cout << "Enter the number" << endl;
    cin >> n;
    int temp_sol = binary_sqrt(n);
    cout << "Answer is more Precision=" <<morePrecision(n,3,temp_sol)<<endl;
    return 0;

}