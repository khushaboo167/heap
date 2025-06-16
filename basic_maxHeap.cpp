// Max heap

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(100);
    pq.push(-10);
    pq.push(210);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}