#include<iostream>
using namespace std;

void reachHome(int dest,int src){

    cout << " source " << src << " destination "<< dest << endl;
    //base case
    if(src == dest){
        cout << "Pahuch gaya "<< endl;
        return;
    }

    //processing -ek step aage badhjao
    src++;

    //recursive call
    reachHome(dest,src);
}
int main(){

    int dest = 10;
    int src = 1;

    cout << endl;
    reachHome(dest,src);
    return 0;
}