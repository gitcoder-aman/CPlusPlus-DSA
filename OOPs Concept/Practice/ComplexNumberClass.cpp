#include<iostream>
using namespace std;

class ComplexNumbers{
    public:
    int real ,imaginary;
    
    ComplexNumbers(int& real,int& imaginary){
        this->real = real; // this is a current address stored in a memory
        this->imaginary = imaginary;
        //  cout << "real "<<&real<<endl;
        // cout << "imaginary"<<&imaginary<<endl;
        // cout << "thisreal "<<&(this->real)<<endl;
        // cout << "thisimaginary"<<&(this->imaginary)<<endl;
        // cout << "this "<<this<<endl;

    }
    void plus(ComplexNumbers c2){
        real = real + c2.real;
        imaginary = imaginary + c2.imaginary;
    }
    void multiply(ComplexNumbers c2){
        int real_temp = (real*c2.real - imaginary*c2.imaginary);
        int real_img = (real*c2.imaginary + imaginary*c2.real);
        real = real_temp;
        imaginary = real_img;
    }
    void print(){
        cout << real << " + i" << imaginary;
    }

};
int main(){

    int real1,imaginary1,real2,imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
  
    ComplexNumbers c1(real1,imaginary1);
    ComplexNumbers c2(real2,imaginary2);

    int choice;
    cin >> choice;

    if(choice == 1){
        c1.plus(c2);
        c1.print();
    } 
    else if(choice == 2){
        c1.multiply(c2);
        c1.print();
    }else{
        return 0;
    }
    return 0;

}