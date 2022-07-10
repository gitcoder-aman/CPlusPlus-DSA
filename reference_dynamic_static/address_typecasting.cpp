#include<iostream>
using namespace std;

int main(){

    int i = 65;
    int *p = &i;
    char *pc = (char*)p;

    cout << *pc << endl;
    return 0;

}