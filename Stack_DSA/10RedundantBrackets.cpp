#include<iostream>
#include<stack>
using namespace std;

bool isRedundantBrackets(string &str){

    stack<char>s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            s.push(ch);
        }
        else{

            //ch ya toh ')' hai or lowercase letter       

            if(ch == ')') {
                    
                    bool isRedundant = true;
                while (s.top() != '(')
                {
                    char top = s.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isRedundant = false;
                    }
                    s.pop(); // operator popped in stack
                }
               if(isRedundant == true)
               return true;

               s.pop(); // popped opening bracket
            }
        }
    }
    return false; 
    
}
int main(){

   // string str = "(a+c*b)+(c))"; // this string is redundant
    string str = "(a*b+(c/d))"; // this string is not redundant

    cout << isRedundantBrackets(str) << endl;
    return 0;

}