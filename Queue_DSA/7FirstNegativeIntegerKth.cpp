#include<iostream>
#include<queue>
using namespace std;

vector<long long>printFirstNegativeInteger(long long int arr[],long long int k,long long int n){

    deque<long long int>dq;
    vector<long long>ans;

    //process first windows of k size
    for(int i = 0; i<k; i++){
        if(arr[i] < 0){
            dq.push_back(i);
        }
    }
    //store answer of first k size windows
    if(dq.size() > 0){
        ans.push_back(arr[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    //process for remaing windows
    for(int i = k; i < n; i++){
        //removing process
        if(!dq.empty() && i - dq.front() >= k){
            
            dq.pop_front();
        }

        //windows addition process
        if(arr[i] < 0){
            dq.push_back(i);
        }
        //ans store
        if(dq.size() > 0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}
int main(){

    long long int N = 5;
    long long int arr[] = {-8, 2, 3, -6, 10};
    long long int K = 2;
    vector<long long>ans = printFirstNegativeInteger(arr,K,N);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
    return 0;

}