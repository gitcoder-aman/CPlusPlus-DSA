#include<iostream>
using namespace std;

class petrolPump{
    public:
    int petrol;
    int distance;
};
class Solution{

    public:
    int tour(petrolPump p[],int n){

        int deficit = 0;
        int balance = 0;
        int start = 0;

        for (int i = 0; i < n; i++)
        {
            balance += p[i].petrol - p[i].distance;
            if(balance < 0){
                deficit += balance;
                start = i+1;
                balance = 0;
            }
        }
        if(balance + deficit >= 0){
            return start;
        }
        else{
            return -1;
        }
    }
};
int main(){

    int n = 4;
    petrolPump p[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> p[i].petrol >> p[i].distance;
    // }
    p[0].petrol = 4;
    p[0].distance = 6;
    p[1].petrol = 6;
    p[1].distance = 5;
    p[2].petrol = 7;
    p[2].distance = 3;
    p[3].petrol = 4;
    p[3].distance = 5;
    
    Solution obj;
    cout << obj.tour(p,n) << endl;
    
    return 0;

}