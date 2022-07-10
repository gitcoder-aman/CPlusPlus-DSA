#include<iostream>
using namespace std;

class time{
    int hr,min;
    public:
    time(int h,int m){  // parametrized constructor
        hr = h;
        min = m;
    }
    time(){         // default constructor
        hr = 0;
        min = 0;
    }
    void show_time(){
        cout << endl << hr << ":" << min;
    }
    time operator+(time T){
        
        time temp;
        temp.min = min + T.min;
        temp.hr  = hr + T.hr + temp.min/60;
        temp.min = temp.min % 60;
        return temp;
    }
};
int main(){

    time t1(5,45),t2(4,35),t3;

    t3 = t1 +t2;
    t1.show_time();
    t2.show_time();
    t3.show_time();
    
    return 0;

}