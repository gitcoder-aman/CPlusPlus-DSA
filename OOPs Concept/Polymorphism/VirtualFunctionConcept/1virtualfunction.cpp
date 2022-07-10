#include<iostream>
using namespace std;

class BaseClass{
        public:
        int var_base = 1;
        virtual void display(){
            cout << "1 Displaying Base class variable var_base " << var_base << endl;
        }
};
class DerivedClass : public BaseClass{

    public:
    int var_derived = 2;
    void display(){

        cout << "2 Displaying Base Class variable var_base " << var_base << endl;
        cout << "2 Displaying Base Class variable var_derived " << var_derived << endl;
    }
};
int main(){

   BaseClass * base_class_pointer;
   BaseClass obj_base;
   DerivedClass obj_derived;

   base_class_pointer = &obj_derived;
   base_class_pointer->display();
    return 0;

}
/*Rules for Virtual functions
1. They cannot be static
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual funtion in base class might not be used.
5. A virtual function is defined in a base class,there is no necessity of redefining it in
the derived class.*/