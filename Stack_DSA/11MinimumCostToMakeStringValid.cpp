#include<iostream>
#include<stack>
using namespace std;

int findMinimumCost(string str){

    //odd function
    if(str.length() % 2 != 0 ){
        return -1;
    }

    stack<char>s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if(ch == '{'){
            s.push(ch);
        }
        else{
            // ch is closed brace

            if(!s.empty() && s.top() == '{') {
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
    }
     //stack contain invalid expression
        int a  = 0, b = 0; 
        while (!s.empty())
        {
            if(s.top() == '{'){
                b++;   // for open brace count
            }
            else{
                a++;    // for closed brace count
            }
            s.pop();
        }
        int ans = (a+1)/2 + (b+1)/2;
        return ans;
}
int main(){

      //string str = "{{{}";
    //  string str = "{{{{";
    //  string str = "{{{}}";// 😚🤪
     string str = "{}}{}{";

    cout << findMinimumCost(str) << endl;
    return 0;

}