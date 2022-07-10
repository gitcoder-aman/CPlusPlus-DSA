#include<iostream>
using namespace std;

class matrix{

int x[3][4];
public:
   void getData(){
       for (int i = 0; i < 2; i++)
       {
           for (int j = 0; j < 2; j++)
           {
               cout << "\nEnter elements in Matrix:";
               cin >> x[i][j];
           }
       }
   }
       void display(){
           for (int i = 0; i < 2; i++)
           {
               for (int j = 0; j < 2; j++)
               {
                   cout << x[i][j] << " ";
               }
           }
           cout << endl;
           
       }
       matrix operator+(matrix T){
           matrix temp;
           for (int i = 0; i < 2; i++)
           {
               for (int j = 0; j < 2; j++)
               {
                   temp.x[i][j] = x[i][j] + T.x[i][j];
               }
           }
           return(temp);
       }
       ~matrix(){
           cout << "\n Matix is deleted"<<endl;
       }
};
int main(){

    matrix obj1,obj2,obj3;
    obj1.getData();
    obj2.getData(); 
    obj3 = obj1 + obj2;
    obj1.display();
    obj2.display();
    cout << endl;
    obj3.display();

    return 0;

}