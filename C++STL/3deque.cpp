// duque - > double ended queue, it is also dynamic
#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int>d;
    d.push_back(5);
    d.push_front(7);

    for(int i:d){
        cout << i<<" ";
    }cout << endl;
    // // d.pop_front();
    //  d.pop_back();

    // cout <<endl;
    // for(int i:d){
    //     cout <<i<<" ";
    // }
    // cout<<endl;

    cout <<"Print First Index Element->"<<d.at(0)<<endl;

    cout <<"Front "<<d.front()<<endl;
    cout <<"Back "<<d.back()<<endl;

    cout <<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);  //time complexity=O(n)
    cout <<"After erase "<<d.size()<<endl;

    for(int i:d){
        cout << i <<endl;
    }
    return 0;
}