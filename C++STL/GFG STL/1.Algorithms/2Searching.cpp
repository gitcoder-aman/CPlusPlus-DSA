#include<iostream>
#include<algorithm>
using namespace std;

/*startaddress: the address of the first 
              element of the array.
endaddress: the address of the next contiguous 
            location of the last element of the array.
valuetofind: the target value which we have 
             to search for.*/
 
void show(int a[],int size){

    for (int i = 0; i <size ; i++)
    {
        cout << a[i] << " "<< endl;
    }
    
}
int main(){
    int a[] = {1,5,8,9,6,7,3,4,2,0};

    int size = sizeof(a)/4;

    //sort the array
    cout << "2 in the array So, we first sort the array" << endl;
    sort(a,a + size);
     cout << "\n\nThe array after sorting is : \n";
    show(a,size); 
    
    cout << "\nNow, we do the binary search"<< endl;
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    return 0;
}
