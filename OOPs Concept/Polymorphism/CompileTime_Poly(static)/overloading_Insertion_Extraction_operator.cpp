#include<iostream>
using namespace std;

class complex{

   private:
   int a,b;
   public:
//    void setData(int x,int y){
//        a = x;
//        b = y;
//    }
//    void showData(){
//        cout << "a=" << a << "b=" << b;
//    }
   friend ostream& operator<<(ostream&,complex);
   friend istream& operator>>(istream&,complex&);
};
ostream& operator<<(ostream &dout,complex c){
    cout << "a" << c.a << "b" << c.b;
    return (cout); // cout place in write dout. cout dout they are same.
} 
istream& operator>>(istream &din,complex &c){
    cin >> c.a >> c.b;
    return (din);
}

int main(){

    complex  c1;
    cout << "enter a complex Number";
    cin >> c1;  // extraction
    cout << "You Entered";
    cout << c1; // insertion
    return 0;

}