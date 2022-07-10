#include<iostream>
#include<windows.h> // for Sleep funciton use this project / for gotoxy function use
#include<conio.h> // for getch fn using 
// #include<stdlib.h>
#include<string.h>
#include<time.h>  // for timing show
// #include<bits/stdc++.h>
#include<fstream>
using namespace std;

char catagories[][15]={"Computer","Electronics","Electrical","Civil","Mechnnical","Architecture"};
void mainMenu();
void addbooks();
void deletebooks();
void searchbooks();
void issuebooks();
void editbooks();
void viewbooks();
int timeshow(); // time
void returnfunc();

void Password();  // lagana jaruri hai bhai . secret mission par chal rhe abhi😀
char password[10] = {"coderaman"};
int op; // for add book option select

fstream myfile;
void gotoxy(int x, int y) // google  baba zindabaad
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	_COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(hConsole, pos);
}
// struct meroDate
// {
//      int mm,dd,yy;
// };
struct books
{
        int id;
        char stname[20];
        char name[20];
        char Author[20];
        int quantity;
        float Price;
        int count;
        // int rackno;
         char *cat;
        // class meroDate issued;
        // struct meroDate duedate;
};
struct books a;
void mainMenu() {
    //loaderanim();

   // fstream myfile;
    int flag=0;
   // myfile.open("e:\\LibrarySystem.txt",ios::in | ios::out | ios::ate);
    // if(myfile.fail())  //only first time run when not created file in your drive
    // {
    // 	myfile.close();
    //     myfile.open("e:\\LibrarySystem.txt",ios::out);
    //      if(myfile.fail())
    //      {
    //      	cout<<"\n File not created ";
    //      	return;
	// 	 }
    //     flag=1;
    // }
    // if(flag==1)
    // {
    // myfile.open("e:\\LibrarySystem.txt",ios::in | ios::out | ios::ate);
	// }
        system("cls");
        //    textbackground(13);
        int i;
        gotoxy(20,3);
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    
        gotoxy(20,5);
        cout << "\xDB\xDB\xDB\xDB\xB2 1. Add Books   ";
        gotoxy(20,7);
        cout << "\xDB\xDB\xDB\xDB\xB2 2. Delete books";
        gotoxy(20,9);
        cout << "\xDB\xDB\xDB\xDB\xB2 3. Search Books";
        gotoxy(20,11);
        cout << "\xDB\xDB\xDB\xDB\xB2 4. Issue Books";
        gotoxy(20,13);
        cout << "\xDB\xDB\xDB\xDB\xB2 5. View Book list";
        gotoxy(20,15);
        cout << "\xDB\xDB\xDB\xDB\xB2 6. Edit Book's Record";
        gotoxy(20,17);
        cout << "\xDB\xDB\xDB\xDB\xB2 7. Close Application";
        gotoxy(20,19);
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,20);
        timeshow();  // for time
        gotoxy(20,21);
        cout << "Enter your choice:";
        switch(getch())
        {
        case '1':
        addbooks();
        break;
        case '2':
       // deletebooks();
        break;
        case '3':
      //  searchbooks();
        break;
        case '4':
       // issuebooks();
        break;
        case '5':
      //  viewbooks();
        break;
        case '6':
      //  editbooks();
        break;
        case '7': 
        {
        system("cls");
        gotoxy(16,3);
        cout << ("\tLibrary Management System");
        gotoxy(16,4);
        cout << ("\tMini Project in C++ ");
        gotoxy(16,5);
        cout << ("\tBy Aman BCA-III Roll - 47 from Mirzaghalib College Gaya ");
        gotoxy(16,7);
        cout << ("\tDon't Copy My Software , it's a joke!"); //😀
        gotoxy(16,8);
        cout << ("******************************************");
        gotoxy(16,10);
        cout << ("*******************************************");
        gotoxy(16,11);
        cout << ("*******************************************");
        gotoxy(16,13);
        cout << ("********************************************");
        gotoxy(10,17);
        cout << ("Exiting in 3 second...........>");
        //flushall();
        Sleep(3000); // windows
       
        exit(0);
        }
        default:{
        gotoxy(10,23);
        cout << ("\aWrong Entry!!Please re-entered correct option");
        if(getch())
        mainMenu();
          }

        }// ending switch cases
}
int timeshow(void) { //for time   // google baba zindabaad
    
    time_t t;
    time(&t);
    cout << "Date and Time:" << ctime(&t);

    return 0 ;
}
void returnfunc(void){
    {
    cout << (" Press ENTER to return to main menu");
    }
    lable:
    if(getch()==13) //allow only use of enter
    mainMenu();
    else
    goto lable;
    }
int main(){   // here main function blindly man😀

        Password();
        getch();

        return 0;
}
bool checkid(int t){
     
     cout << "1";
     myfile.seekg(0);
     while(myfile.read((char *) &a,sizeof(a)))
	     {
        	  if(a.id == t)
              return true;
         }
         return false;
}
int getdata()
{
int t; // for id
        gotoxy(20,3);cout<<"Enter the Information Below";
        gotoxy(20,4);cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,5);
        cout << "\xB2";gotoxy(46,5);cout << "\xB2";
        gotoxy(20,6);
        cout <<"\xB2";gotoxy(46,6);cout <<"\xB2";
        gotoxy(20,7);
        cout << "\xB2";gotoxy(46,7);cout <<"\xB2";
        gotoxy(20,8);
        cout <<"\xB2";gotoxy(46,8);cout <<"\xB2";
        gotoxy(20,9);
        cout <<"\xB2";gotoxy(46,9);cout<<"\xB2";
        gotoxy(20,10);
        cout << "\xB2";gotoxy(46,10);cout <<"\xB2";
        gotoxy(20,11);
        cout << "\xB2";gotoxy(46,11);cout <<"\xB2";
        gotoxy(20,12);
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(21,5);
        cout << "Category:";
        gotoxy(31,5);
        cout << catagories[op-1];
        gotoxy(21,6);
       
        cout << "Book ID:\t";
        gotoxy(30,6);
        cin >> t;

        if( checkid(t) )  // for unique id of BOOK
        {
        gotoxy(21,13);
        cout << "\aThe book id already exists\a";
        getch();
        mainMenu();
        return 0;
        }
        a.id=t;
        gotoxy(21,7);
        cout << "Book Name:";gotoxy(33,7);
        cin >> a.name;
        gotoxy(21,8);
        cout << "Author:";gotoxy(30,8);
        cin >> a.Author;
        gotoxy(21,9);
        cout << "Quantity:";gotoxy(31,9);
        cin >> a.quantity;
        gotoxy(21,10);
        cout << "Price:";gotoxy(28,10);
        cin >> a.Price;
        gotoxy(21,11);
        // cout << "Rack No:";gotoxy(30,11);
        // cin >> a.rackno;
        return 1;
}
void addbooks()    //funtion that add books
{
        system("cls");
        int i;
        gotoxy(20,5);
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,7);
        cout << "\xDB\xDB\xDB\xDB\xB2 1. Computer";
        gotoxy(20,9);
        cout << "\xDB\xDB\xDB\xDB\xB2 2. Electronics";
        gotoxy(20,11);
        cout << "\xDB\xDB\xDB\xDB\xB2 3. Electrical";
        gotoxy(20,13);
        cout << "\xDB\xDB\xDB\xDB\xB2 4. Civil";
        gotoxy(20,15);
        cout << "\xDB\xDB\xDB\xDB\xB2 5. Mechanical";
        gotoxy(20,17);
        cout << "\xDB\xDB\xDB\xDB\xB2 6. Architecture";
        gotoxy(20,19);
        cout << "\xDB\xDB\xDB\xDB\xB2 7. Back to main menu";
        gotoxy(20,21);
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,22);
        cout << "Enter your choice:";
        cin >> op;
        
        if(op==7)
        mainMenu();
        
        system("cls");
        myfile.open("e:\\LibrarySystem.txt",ios::in | ios::out | ios::ate);
        myfile.seekg(0,ios::end);
        if(getdata()==1)
        {
            a.cat=catagories[op-1];
            
            // myfile.seekg(0,ios::end);
			myfile.write((char *) &a,sizeof(a));
            myfile.close();
            gotoxy(21,14);
            printf("The record is sucessfully saved");
            
            gotoxy(21,15);
            printf("Save any more?(Y / N):");
            if(getch()=='n')
            mainMenu();
            else
            system("cls");
            addbooks();
       }
}
void Password(){

    system("cls");
    char headline[25] = "Password Protected";
    char pass[10],ch;
    int i=0,j;

    gotoxy(10,4);

    for(j = 0; j<20; j++) {

        Sleep(40);
        cout << "*";
    }
    for ( j = 0; j < 20; j++)
    {
        Sleep(40);
        cout << headline[j];
    }
    for(j = 0; j<20; j++) {

        Sleep(40);
        cout << "*";
    }
    gotoxy(10,10);
    gotoxy(15,7);  //design complete
    
    cout << "Enter Password: ";
    while(ch != 13){

        ch = getch();

        if(ch != 13 && ch != 8){
            putch('*');
            pass[i] = ch;
            i++;
        }
    }
    pass[i] = '\0';
    if(strcmpi(pass,password) == 0){
        gotoxy(15,9);
        cout << "Password Match";
        gotoxy(17,10);
        cout << "Press any key to continue.....";
        getch();

        mainMenu();
    }
    else{
        gotoxy(15,16);
        cout << "\aWarning!! Incorrect Password";
        getch();
        Password();
    }

}