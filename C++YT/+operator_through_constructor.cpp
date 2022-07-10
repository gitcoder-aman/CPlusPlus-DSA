#include<iostream>
using namespace std;

class complex{

    int a,b;
    public:
    void showData(){   // showData constructor
        cout << "a="<<a << "b=" <<b;
    }
     complex(int x,int y){     // getData constructor
        a = x; b = y;
    }
    complex operator+(complex T){
        complex  temp(0,0);

        temp.a = a + T.a;
        temp.b = b + T.b;
        return(temp);
        
    }
};
int main(){

    complex c1(5,6),c2(2,4),c3(0,0);
   
       c3 = c1 +c2;
    c1.showData();
    c2.showData(); 
    cout << endl<<"---------"<<endl;
    c3.showData(); 


    return 0;

}