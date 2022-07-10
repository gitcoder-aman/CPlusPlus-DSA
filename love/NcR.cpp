#include<iostream>
using namespace std;

int fact(int num){

    if (num==0)
    {
        return 1;
    }  
    int Prevfact = fact(num-1);
    return num*Prevfact;  
}
int main(){
  
  int n,r;
  cin >> n >> r;
  int comb;

  comb = fact(n)/(fact(r)*fact(n-r));
  cout << comb;

}