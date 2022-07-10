#include<iostream>
using namespace std;
class complex{

    int a, b;
    public:
    complex(int x, int y){    // Parameterized Constructor
        a = x; b = y;
    }
    complex(int k){
        a = k;
    }
    complex(){       // Default Constructor
                                           //Also created complier default Constructor when we can not create
                                           //default Constructor
    }
    complex(complex &c){  // Copy Constructor

       a = c.a;
       b = c.b;
       cout << a <<b ;
    }
    
     
};
int main(){

    complex c1(3,4),c2;
    complex c4(c1);
    return 0;
}