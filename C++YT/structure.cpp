#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main(){

  book b1={100,"c++",450.0};
  book b2,b3;
  b2.bookid = 101;
  strcpy(b2.title,"c++");
  cout << b2.title;
  b2.price = 300.0;
  cout << b2.price<<endl;
  b3.price = b2.price;
  cout << b3.price<<endl;
}