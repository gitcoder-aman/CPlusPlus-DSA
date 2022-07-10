#include<iostream>
#include<algorithm>
#include<functional> // for greater
using namespace std;

//sort(startaddress,endaddress)
 
void show(int a[],int size){

    for (int i = 0; i <size ; i++)
    {
        cout << a[i] << " ";
    }cout << endl;
    
}
int main(){
    int a[] = {1,5,8,9,6,7,3,4,2,0};
    cout << sizeof(a) << endl;
   int size = sizeof(a)/4;
    cout << "The array before sorting is : "<<endl;

    //print the array
    show(a,size);
    //sort the array

    sort(a,a + size); // sorting accending order

    cout << "\n The array after sorting is : "<< endl;

    //print the array after sorting

    show(a,size); 
             //   (functor)
    sort(a,a+size,greater<int>()); // sorting decending order
    show(a,size);
    
    return 0;
}
