#include<iostream>
#include<fstream>
using namespace std;

class emp{
    char name[40],code[10];
    long salary;
    public:
    void display(){
        cout << "Name= " << name << " Code= " << code << " Salary= " << salary;
    }
};
int main(){

    fstream myfile;
    myfile.open("D:\\Employee.txt",ios::in); // in use for reading purpose

    if(myfile.fail()){
        cout << "File is not found " << endl;
        return 0;
    }
    emp E;
    while (myfile.read((char*)&E,sizeof(E)))
    {
        myfile.seekg(0,ios::beg);
        E.display();
        cout << endl;
    }
    cout << "\nEnd of reading file " << endl;
    myfile.close();
 
    return 0;

}