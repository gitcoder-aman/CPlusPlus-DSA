//insert() – It inserts new elements before the element at the specified position
#include<iostream>
#include<vector>
using namespace std;

//1synatax = vector_name.insert(position,val)
int main(){
    
    cout << "First Syntax "<< endl;
    vector<int> v = {10,20,30,40,50};

    //insert 3 at front

    auto it = v.insert(v.begin(),3);

    //insert 2 at front

    v.insert(it,2);

    it = v.insert(v.begin() + 2, 7);

    cout << "The vector elements are: " << endl;

    // for(auto it  = v.begin(); it != v.end(); ++it){
    //     cout << *it <<endl;
    // }
    for(auto it : v)
    cout<< it << " ";cout << endl;

//2Syntax  = vector_name.insert(position,size,val); //size means how many time inserted values
    cout << "Second Syntax "<< endl;
    
    vector<int>vec = {10,20,30,40};

     //insert 3 one time at front
     auto itr = vec.insert(vec.begin(),1,3);
     
     cout << "The vector elements are: " << endl;
    
    for(auto itr : vec)
    cout << itr << " ";cout << endl;

    //insert 4 two times at front
    
    cout << "Inserted 4 times at front " << endl;
    vec.insert(itr,2,4);

    for(auto itr : vec)
    cout << itr << " ";cout << endl;

//3Synatax = vector_name.insert(position, iterator1, iterator2)
// position – It specifies the position at which insertion is to be done in vector.
// iterator1 – It specifies the starting position from which the elements are to be inserted
// iterator2 – It specifies the ending position till which elements are to be inserted
    
    vector<int>v1 = {10,20,30,40};
    vector<int>v2;

    //inserting at the begining of v2;

    v2.insert(v2.begin(),v1.begin(),v1.end());

    cout << "The Vector2 elements are : "<< endl;

    for(auto i = v2.begin(); i != v2.end(); ++i){
        cout << *i << " ";
    }cout << endl;

    return 0;

}