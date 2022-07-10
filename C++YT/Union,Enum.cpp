#include<iostream>
using namespace std;
union money
    {
      int rice;
      char car;
      float pounds;  
    };
int main(){

    union  money m1;
    m1.rice  = 34;  // here store garbaze value
    m1.car = 'c';
    cout << m1.car << endl;

    // Enum

    enum meal {breakfast,lunch,dinner};
    cout << breakfast<<endl;
    cout << lunch <<endl;
    cout << dinner <<endl;
    
}