//Defining member function outside the class
#include<iostream>
class item{

    char item_name[50],code[10],company[40];
    float price;
    public:
    void get_item();
    void show_item();
};
void item::get_item()
{
    std :: cout <<std::endl<< "Enter item_Name,code,Company and Price:";
    std :: cin >> item_name >> code >> company >> price;
}
void item::show_item()
{
    std :: cout << std::endl<< "Name="<<item_name;
    std :: cout << "code="<< code << "company="<< company << "Price="<< price;
}
int main()
{
    item obj;
    obj.get_item();
    obj.show_item();
    return 0;
}
