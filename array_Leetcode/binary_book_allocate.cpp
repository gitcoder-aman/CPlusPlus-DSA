// Painter's Partition Problem as it is same 
#include<iostream>
using namespace std;

bool isPossible(int arr[],int m,int n,int mid){
    int studentCount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((pagesum + arr[i]) <= mid)
        {
            pagesum += arr[i];
        }
        else{
            studentCount++; // next student
            if(studentCount > m || arr[i] > mid){
                return false;
            }
        pagesum = arr[i]; // new page sum created

        }
    }
    return true;
}
int book_allocate(int arr[],int m,int n){

    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s <= e)
    {
        if(isPossible(arr,m,n,mid)){
             ans = mid;
             e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){

     int n = 4; // arr of size;
    int arr[n] = {10,20,30,40};//12,34,67,90
    int m = 2;      // no of students
    cout << book_allocate(arr,m,n);   // use of binary search
    return 0;

}