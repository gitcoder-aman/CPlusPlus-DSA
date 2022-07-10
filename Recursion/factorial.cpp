// when a fuction call it self is called rescursion
#include<iostream>
using namespace std;
//Time complexity = O(n)
//space complexity = O(n)
// recursive function
int factorial(int n){

    //base case mandatory
    if(n == 0)
    return 1;

    int smaller = factorial(n-1); //recursive relation
    int biggerProblem = n * smaller;
    return biggerProblem;
}
int main(){

    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;
    return 0;

}