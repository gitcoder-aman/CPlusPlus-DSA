#include<iostream>
using namespace std;

void update(int **p2){

   // p2 = p2 + 1; // kya kuchh hoga - NO
    
    //*p2 = *p2 + 1; // ha address increase 4 bytes

    **p2 = **p2 + 1; // value increase 1
}
int main(){

    int i = 3;
    int *p = &i;
    int **p2 = &p;
    
    // cout << "address of i " << &i << endl;
    // cout << "Printing p " << p << endl;
    // cout << "Printing *p " << *p << endl;


    // cout << "address of p " << &p << endl;
    // cout << endl;
    // cout << "value of p2->" << p2 << endl;
    // cout << "value of *p2->" << *p2 << endl;
    // cout << "value of **p2->" << **p2 << endl;
    
    // cout << endl;
    
    // cout << "address of i" << endl;
    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // cout << endl;

    // cout << "address of p" << endl;
    // cout << &p << endl;
    // cout << p2 << endl;

     cout << "before " << i << endl;
     cout << "before " << p << endl;
     cout << "before " << p2 << endl;

     update(p2);

     cout << "After " << i << endl;
     cout << "After " << p << endl;
     cout << "After " << p2 << endl;
     
 






    return 0;

}