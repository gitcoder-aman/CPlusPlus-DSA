#include<iostream>
using namespace std;

//inline functions are used to reduce the function call overhead
//Benifiets - No extra memory, No function call overhead
inline int getMax(int& a,int& b){
   return (a>b) ? a : b;           // 1 statement = this function will be compiled
}                                  // 2 or 3 statements = depends on compiler
int main(){                        // more than 3 statements = not compiled

    int a = 1,b = 2;
    int ans = 0;

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;

    return 0;

}
//To prevent this, what we can do is create inline functions. Inline functions replace the function call with its definition of when invoked.