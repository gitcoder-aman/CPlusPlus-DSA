#include<iostream>
#include<string>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}
int main(){

    char name[20];
    
    cout << "Enter your name "<<endl;
    //cin >> name;
     cin.getline(name,20);

    cout << "Length:"<< getLength(name) << endl;
    return 0;

}