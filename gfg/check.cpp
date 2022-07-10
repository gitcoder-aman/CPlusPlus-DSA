#include<iostream>
using namespace std;

struct student
{
    char std_name[20];
    char father_name[20];
    char mother_name[20];
    int roll_no;
    long mob_no;
};
void display(struct student);
struct student input();
int main()
{
    struct student a;
    a=input();
    display(a);
}
void display(struct student c)
{
    cout<<"****************************"<<endl;
    cout<<c.std_name<<endl<<c.father_name<<endl<<c.mother_name<<endl<<c.roll_no<<endl<<c.mob_no;
}
struct student input()
{
    struct student b;
    cout<<"enter student name ,father name , mother name , roll_no and mon_no=";
    cin.getline(b.std_name,20);
  
    cin.getline(b.father_name,20);
    cin.getline(b.mother_name,20);
    // fflush(stdin);
    cin.ignore();
    cin>>b.roll_no;
    cin>>b.mob_no;
    return(b);
};