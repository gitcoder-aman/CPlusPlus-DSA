#include<iostream>
using namespace std;
void fun(int a[]);
void swapping(char *,char *);
void Q(int);
void P(int *);


//https://www.codingninjas.com/codestudio/guided-paths/pointers
int main(){

   /* float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p;*/

    /*int a = 7;
    int b = 17;
    int *c = &b; 
    a = *c;
    *c = *c + 1;
    cout  << a << "  " << b << endl;*/

    /*int *ptr = 0;
    int a = 10;
    *ptr = a;
    cout << *ptr << endl;*/   //ERROR

     /*char ch = 'a';
     char *ptr = &ch;
     ch++;
     cout << *ptr << endl;*/

     /*int a = 7;
     int *c = &a;
     c = c + 1;
     cout  << a << "  " << *c << endl; // a = 7, *c = garbage value*/

     /*int a[] = {1, 2, 3, 4};
     cout << *(a) << " " << *(a+1);*/

     /*int a[6] = {1, 2, 3};
     cout << (a + 2);*/

     /*int a[] = {1, 2, 3, 4};
     int *p = a++; // address of Oth array not increament
     cout << *p << endl;*/

     /*int arr[] = {4, 5, 6, 7};
     int *p = arr + 1;
     cout << *p << endl;
     cout << *arr + 9;*/

     /*char b[] = "xyz";
     char *c = &b[0];
     cout << c << endl;*/

     /*char s[]= "hello";
     char *p = s;
     cout << s[0] << " " << p[0];*/

    /* char *ptr; 
     char Str[] = "abcdefg";
     ptr = Str;
     ptr += 5;
     cout << ptr;*/

   /*  int numbers[5];
    int * p;
    p = numbers; 
    *p = 10;
    p = &numbers[2]; 
    *p = 20;
    p--; 
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p+4) = 50;
    for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }*/

  /* char st[] = "ABCD";
   cout << *st << endl;
   cout << *st+1 << endl;
   cout << *(st+1) << endl;


    for(int i = 0; st[i] != '\0'; i++) {
       cout << st[i] << *(st)+i << *(i+st) << i[st] << endl;
    }*/

    /*float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    cout<<*ptr2<<" ";
    cout<< ptr2 - ptr1;*/

   /* int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];*/

    /*char *x = "geeksquiz";
    char *y = "geeksforgeeks";
    char *t;
    swapping(x, y);
    cout<<x << " "<<y;
    t = x;
    x = y;
    y = t; 
    cout<<" "<<x<< " "<<y;*/
    
     /*int x = 5;
     P(&x);
     cout<<x;*/

    /* int a = 10;
     int *p = &a;
     int **q = &p;
     int b = 20;
     *q = &b;
     (*p)++;
    cout << a << " " << b << endl;*/

    return 0;

}
    /*void fun(int a[]) {
    cout << a[0] << " ";
}*/
/*void swapping (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}*/

   /* void Q(int z)
    {
      z += z;
      cout<<z << " ";
    }
    
    void P(int *y) 
    {
      int x = *y + 2;
      Q(x);
      *y = x - 1; 
      cout<<x << " ";
    }*/
    