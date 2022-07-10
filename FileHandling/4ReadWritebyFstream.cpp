#include<iostream>
#include<fstream>
using namespace std;

int main(){

    fstream myfile;
    myfile.open("d:\\ReadWrite.txt",ios::in | ios :: out |ios :: ate);

    char str[200];int op;
    do
    {
        fflush(stdin);
        cout << "Enter Country Name: " << endl;
        cin.getline(str,200);
        // cout << str << endl;

        cout << "Enter More country name(1-yes/ 0-No) "<< endl;
        cin >> op;
    } while (op==1);

    myfile.seekg(0,ios::beg);
    while (myfile)
    {
        myfile.getline(str,200);
      
        if(myfile.eof()){
        cout << "1";
        break;
        }

        // cout << str << endl;
        myfile.close();
    }
    
    
    return 0;

}