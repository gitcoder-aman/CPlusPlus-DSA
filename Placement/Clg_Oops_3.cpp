// Wap in c++ to input information of 5 employees and then find the summession of all employee's Salary
#include<iostream>
using namespace std;
class emp
{
    char name[40],code[10];
    long salary;
    public:
    void get_emp()
    {
        cout << "Enter name,code & Salary";
        cin >> name >> code >> salary;
    }  
    void show_emp()
    {
        cout << endl << "Name="<< name <<"code" << code << "salary" << salary;
    }
    long summation(long s)
    {
        s+=salary;
        return s;
    }
};
int main()
{
    emp E[5];int i;
    cout << endl <<"Inputting Employee info";
    for (int i = 0; i < 5; i++)
    {
        E[i].get_emp();
    }
    cout << endl << "Displaying Info.";

     for (int i = 0; i < 5; i++)
     {
        E[i].show_emp();
     }
     long sum =0;
     for (int i = 0; i < 5; i++)
     {
         sum = E[i].summation(sum);
     }
     cout << endl << "Total Summation=" << sum;
     return 0;
}