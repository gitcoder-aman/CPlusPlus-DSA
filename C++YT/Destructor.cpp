#include<iostream>
using namespace std;
class complex{

    int a,b;
    public:
    ~complex(){
        cout << " Destructor";                                                                                          
    }
};
void fun(){
    complex obj;
}
int main()
{
   fun();
}