#include<iostream>
using namespace std;

//https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118785/offering/1381137
// 8 bytes in 64 bytes
// 4 bytes in 32 bytes
// static = small
// dynamic = Big

int getSum(int *arr,int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main(){
// STATIC memory allocation
    // int n;  
    // cin >> n; // bad practice no input of size at the run time
    // int arr[n]; 
    //fixed gives  n but no input of size at the run time

    // int n = 20; // good code
    // int arr[n];
    
    // how bad practice = stack limited memory bring at the run time and user inputed size memory more than STACK, then crashed my file.
    // so fixed memory enter at the compliled time.



    // DYNAMIC memory allocation

    //how to use run time input of size = use for HEAP memory

    /*char ch = 'q';
    cout << sizeof(ch) << endl;

    char* c = &ch;
    cout << sizeof(c) << endl;*/
    
    // heap alloaction
   /* int n;
    cin >> n;
    //variable size array
    int* arr = new int[n];
   // cout << sizeof(arr) << endl; // static memory
    
    //taking input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = getSum(arr,n);
    cout << "answer is  "<< ans << endl;*/

   //NOTE - static allocation -> memory automatically release
   //       Dynamic allocation -> manually release ("delete" keyword use) ex- delete []arr
     
    return 0;

}