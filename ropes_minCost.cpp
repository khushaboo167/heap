//  minimum cost to connect all ropes

#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int minCost=0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    while(pq.size()>1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        pq.push(x+y);
        minCost += (x+y);
    }
    cout<<minCost;
}