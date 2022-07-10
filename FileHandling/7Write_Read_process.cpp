#include<iostream>
#include<fstream>
using namespace std;

class emp{

    char name[40],code[10];
    long salary;

    public:
    void display(){
        cout << "Name = " << name << " Code= "<< code << " Salary= " << salary;
    }
    void getdata(){
        cout << "Enter name , code , salary " << endl;
        cin >> name >> code ;
        cin.ignore();
        cin >> salary;
    }
};
int main(){

    fstream myfile;
    emp E;
    myfile.open("C:\\Users\\amank\\OneDrive\\Desktop\\Employeecplus.txt",ios::in| ios:: out | ios::ate);

    if(myfile.fail()){
        myfile.open("C:\\Users\\amank\\OneDrive\\Desktop\\Employeecplus.txt",ios::out);
    } 
    // myfile.close();
    // myfile.open("C:\\Users\\amank\\OneDrive\\Desktop\\Employeecplus.txt");
    int op;
    do{
        cout << "\n 1) Add Record \n 2) Read Record \n 0)Exit";
        cout << "\nEnter your option ";
        cin >> op;
        
        switch(op){
         case 1:
            myfile.seekg(0,ios::end);
            E.getdata();

            myfile.write((char*)&E,sizeof(E));
            break;
         case 2:
            myfile.seekg(0,ios::beg);
            while (myfile.read((char*)&E,sizeof(E)))
            {
                E.display();
                cout << endl;
            }
                break;
        
         case 0:
            cout << "\aGood Bye!" << endl;
            myfile.close();
            break;
         default:
            cout << "invalid choice "; 
        }// end of switch
    }while(op != 0);

    return 0;

}