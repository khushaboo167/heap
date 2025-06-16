// sort a 'k' sorted array(sort a nearly sorted array)

#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int k=3;
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int> , greater<int>> pq;
    vector<int> ans;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}