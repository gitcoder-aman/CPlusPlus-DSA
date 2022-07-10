#include<iostream>
using namespace std;
struct book
{
    private:
    int bookid;
    char title[20];
    float price;

    public:
    void input()
    {
        cout << "Enter bookid, title, and price";
        cin >> bookid >> title >> price;
        if (bookid < 0)
        {
            bookid =-  bookid;
        }
    }
    void display()
    {
        cout << bookid << title << price;
    }
};
int main()
{
    book b1;
    //b1.bookid=-100;   // this is not accessble because data private
    b1.input();
    b1.display();
}
