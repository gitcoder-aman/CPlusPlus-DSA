#include<iostream>
#include<unordered_map>
using namespace std;

typedef unordered_multimap<string,int>::iterator unit;
void print(unordered_multimap<string,int>&umm){
    
    for(auto itr = umm.begin(); itr != umm.end();itr++){
        cout << "< " << itr->first << "," << itr->second << "> " << endl;
    }
}
int main(){

    unordered_multimap<string,int>umm1;

    //initilizing by initializer list
    //duplicate allowed
    unordered_multimap<string,int>umm2(
        {{"apple",1},{"ball",2},{"apple",10},
        {"cat",7},{"dog",9},{"cat",6},{"apple",1}}
    );
    //initialization by assignment operation
    umm1 = umm2;
    print(umm1);

    if(umm2.empty()){
        cout << "unordered multimap 2 is empty "<< endl;
    }
    else{
        cout << "unorederd multimap 2 is not empty "<< endl;
    }
    cout << "Size of unordered multimap 1 is "<< umm1.size() << endl;

    string key  = "apple";

    //find and return any pair, associated with key

    unit it = umm1.find(key);

    if(it != umm1.end()){

        cout << "Key "<< key << " is there in unordered multimap 1"<< endl;
    }
    else{
        cout << "None of the value associated with "<<key << " is " << it->second<< endl;
    }
    
    //count return count of total number of pair associated with key

    int cnt = umm1.count(key);
    cout << "total values associated with " << key << " are " << cnt << endl;

    print(umm2);

    //one insertion by making pair expilicity
    umm2.insert(make_pair("dog",11));
    //insertion by initializer list

    umm2.insert({{"alpha",12},{"beta",33}});

    cout << "after insertion of <alpha,12> and <beta,33> " << endl;
    print(umm2);

    //erase deletes all pairs corresponding to key

    umm2.erase("apple");
    cout << "After deletion of apple " << endl;
    print(umm2);

    umm1.clear();

    if(umm1.empty()){
        cout << "unordered multimap 1 is empty " << endl;
    }
    else{
        cout << "unordered multimap 1 is not empty " << endl;
    }
    return 0;

}