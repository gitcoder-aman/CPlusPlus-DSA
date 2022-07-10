// read and write through fstream
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class emp
{
	 char name[30],code[10];
	 long salary;
	 public:
	 	void getdata()
	 	{
	 		cout<<"\n Enter name.code and salary ";
	 		cin>>name>>code>>salary;
		 }
		void display()
		{
			cout<<"\n Name="<<name<<"\t code="<<code<<"\t salary="<<salary;
		 }
	   void search(fstream &t_file,char cd[])
	   {
	   	int flag=0;
	   	emp T;
	   	//fstream t_file;
	   	//t_file.open("c:\\employee.txt",ios::in | ios::out | ios::ate);

	   	 while(t_file.read((char *) &T,sizeof(T)))
	   	   {
	   	   	  if(strcmpi(T.code,cd)==0)

	   	   	// if(T.salary>=50000)
	   	   	    {
	   	   	    	T.display();
	   	   	    	flag=1;
	   	   	    	//break;
				}
		   }
			 if(flag==0)
			 {
			 	cout<<"\n Record not found ";
			  }
	   }
	 void modify(fstream &t_file,char cd[])
	 {
	    int flag=0;
	   	emp T;
	   	long L;
	   	L=sizeof(T);
	   	//fstream t_file;
	   	//t_file.open("c:\\employee.txt",ios::in | ios::out | ios::ate);
         t_file.seekg(0);
	   	 while(t_file.read((char *) &T,sizeof(T)))
	   	   {
	   	   	  if(strcmpi(T.code,cd)==0)
    	   	    {
    	   	        cout<<"\n Enter new name and new salary ";
    	   	        cin>>T.name>>T.salary;
    	   	       // t_file.seekg()
    	   	        t_file.seekg(-L,ios::cur);
    	   	        t_file.write((char *) &T,sizeof(T));
	   	   	    	//T.display();
	   	   	    	flag=1;
	   	   	    	break;
				}
		   }
			 if(flag==0)
			 {
			 	cout<<"\n Record not found ";
			  }
	 }
  void delete_record(fstream &file,fstream &t,char cd[])
  {
      emp T;
      int flag=0;
      file.seekg(0);
      while(file.read((char *) &T,sizeof(T)))
      {
          if(strcmpi(T.code,cd)!=0)
             t.write((char *) &T,sizeof(T));
          else
            flag=1;
      }
      if(flag==1)
      {
      file.close();
      t.close();
      remove("c:\\employee.txt");
      rename("c:\\employee_temp.txt","c:\\employee.txt");
     file.open("c:\\employee.txt",ios::in | ios::out | ios::ate);
     cout<<"\n Record deleted successfully";
      }
      else
        cout<<"\n Record can not be found in the given file";

  }
};
int main()
{
    fstream myfile,temp;
    int flag=0;
    myfile.open("c:\\employee.txt",ios::in | ios::out | ios::ate);
    if(myfile.fail())
    {
    	myfile.close();
        myfile.open("c:\\employee.txt",ios::out);
         if(myfile.fail())
         {
         	cout<<"\n File not created ";
         	return 0;
		 }
        flag=1;
    }
    if(flag==1)
    {
    myfile.open("c:\\employee.txt",ios::in | ios::out | ios::ate);
	}
	int op,flag1=0;
	emp E;
	char s_code[10];
	do
	{
		cout<<"\n -----MENU--------";
		cout<<"\n 1)Add record \n 2)Display \n 3)search \n 4)Modification Process \n 5) Deletion \n 0)Exit";
		cout<<"\n Enter your option ";
		cin>>op;

		switch(op)
		{
		  case 1:
		  	myfile.seekg(0,ios::end);
		    E.getdata();
			myfile.write((char *) &E,sizeof(E));
			break;
		  case 2:
		   myfile.seekg(0,ios::beg);
		   while(myfile.read((char *) &E,sizeof(E)))
		   {
		   	 E.display();
		   }
		   myfile.clear();
		   break;
		  case 0:
		   cout<<"\n Good Bye!";
		   break;
		  case 3:
		   cout<<"\n Enter code for searching ";
		   cin>>s_code;

		   myfile.seekg(0);
		   E.search(myfile,s_code);
		   break;
		  case 4:
           cout<<"\n Enter code for searching ";
		   cin>>s_code;
		    myfile.seekg(0);
		    E.modify(myfile,s_code);
		    break;
          case 5:
            cout<<"\n Enter code for Deleting ";
		   cin>>s_code;


    temp.open("c:\\employee_temp.txt", ios::out);
    if(temp.fail())
    {
    	cout<<"\n file not created";
    	return 1;

    }


	E.delete_record(myfile,temp,s_code);
	break;

		 default:
		  cout<<"\n Invalid choice ";
		}
	}while(op!=0);
	myfile.close();
	return 0;
	}










