#include<iostream>
#include<unordered_set>
using namespace std;

typedef unordered_multiset<int> :: iterator umit;
void print(unordered_multiset<int>ums){


    for ( auto it = ums.begin(); it != ums.end(); it++)
    {
          cout << *it << " ";
    }cout << endl;
    
}
int main(){

    unordered_multiset<int>ums1;

    unordered_multiset<int>ums2({1,3,1,7,2,3,4,1,6});

    ums1 = {2,7,2,5,0,3,7,5};

    if(ums1.empty()){
        cout << "unordered multiset 1 is empty "<< endl;
    }
    else{
        cout << "unordered multiset 1 not empty "<< endl;
    }

    cout << "The Size of unordered multiSet 2 is :" << ums2.size() << endl;

    print(ums1);

    ums1.insert(7);
    
    print(ums1);

    int val = 3;
    if(ums1.find(val) != ums1.end()){
        cout << "unordered multiset 1 contains "<< val << endl;
    }
    else{
        cout << "unordered multiset 1 does not contains " << val << endl;
    }

    val = 5;
    int cnt = ums1.count(val);
    cout << val << " Appear "<< cnt << " times in unordered multiset 1 " << endl;

    val = 2;

   pair<umit,umit>erange_it = ums2.equal_range(val);

   if(erange_it.first != erange_it.second)
   cout <<val << " Appeared atleast once in unordered_multiset "<< endl;
   else
   cout << val << " Does not exit in unordered_multiset "<< endl;

   print(ums2);
   
   //erase function delete all instance of val
    ums2.erase(val);
    print(ums2);

    //clear function deletes all entires from set
    ums1.clear();

    if(ums1.empty()){
        cout << "unordered multiset 1 is empty "<<endl;
    }
    else{
        cout << "unordered multiset 1 is not empty "<< endl;
    }
    return 0;

}