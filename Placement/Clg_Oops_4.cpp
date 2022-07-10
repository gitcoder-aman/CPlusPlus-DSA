//Max Salary Find in Employee
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
   void show_emp(long T)
    {
        if (T == salary)
        {
             cout << endl << "Name="<< name <<" code" << code << " salary" << salary;
        }
    }
    long maximum(long m)
    {
        if (m < salary)
        {
            m = salary;
        }
        return m;
    }
};
int main()
{
    emp E[5];int i;
    cout << "Inputting Employee Info.";
    for (int i = 0; i < 5; i++)
    {
        E[i].get_emp();
    }
    long max = 0;
    for (int i = 0; i < 5; i++)
    {
        max = E[i].maximum(max);
    }
    cout << "Display all those emp who get max Salary";
    for (int i = 0; i < 5; i++)
    {
        E[i].show_emp(max);
    }
    return 0;
}