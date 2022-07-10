#include<iostream>
using namespace std;
class emp
{
   char name[40],code[10];
   long salary;
   public:
   void getdata()
   {
       cout << "Enter name,code & salary";
       cin >> name >> code >> salary;
   } 
   void display()
   {
       cout << "Name="<< name <<" code=" << code;
       cout << " salary=" << salary;
   }
};
int main()
{
    emp obj;
    obj.getdata();
    cout << "Display info. of Employee:";
    obj.display();
    return(0);
}