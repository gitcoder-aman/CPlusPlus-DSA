#include<iostream>
#include<fstream>
using namespace std;

class emp{

    char name[40],code[10];
    long salary;
    public:

    void getdata(){
        fflush(stdin);
        cout << "Enter name,code,and salary " << endl;
        cin >> name >> code;
        cin.ignore();
        cin >> salary;
    }
};
int main(){

    emp E;
    fstream myfile;    
    myfile.open("d:\\Employee.txt",ios::out); // out use for writing purpose
    if(myfile.fail()){
        cout << "Fail to Create file ";
        return 0;
    }  
    int op;
    do
    {
        E.getdata();
        myfile.write((char*)&E,sizeof(E));
        cout << "Want to write name record 1Y/0N" << endl;
        cin.ignore();
        cin >> op;
    } while (op==1);
    myfile.close();

    return 0;

}