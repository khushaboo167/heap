// Min heap

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,vector<int> , greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(100);
    pq.push(-10);
    pq.push(210);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}