#include<iostream>
using namespace std;

class dest{
    int x;
    static int c;
    public:
    dest(int a){
        x = a;
        c++;
        cout << "\n Object created="<<c;
    }
    ~dest(){
        cout << "\n Object is destroyed="<<c;
        c--;
    }
};
 int dest::c;
int main(){
    
    dest obj1(5),obj2(10),obj3(15);
    cout << "\nProcess start from main()";
      {
        cout << "\nControl row in Block1";
        dest obj4(25);
      }
    cout << "\nControl back in main()";
    return 0;
}