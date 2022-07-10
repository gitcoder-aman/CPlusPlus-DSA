#include<iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nstairs){

    //base case
    if(nstairs < 0)
    return 0;

    if(nstairs == 0)
    return 1;

    //Recursive call
    int ans = countDistinctWayToClimbStair(nstairs - 1) + countDistinctWayToClimbStair(nstairs - 2);
    return ans;
}
int main(){

    cout << countDistinctWayToClimbStair(4)<<endl;
    cout << countDistinctWayToClimbStair(5);

    return 0;

}