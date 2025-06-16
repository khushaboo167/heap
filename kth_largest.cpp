// // Find the kth largest elements in a given array

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     int arr[] = {10,20,-4,5,18,24,1,-7,56};
//     int k=2;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     priority_queue<int,vector<int> , greater<int>> pq;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//         if(pq.size()>k) pq.pop();
//     }
//     cout<<pq.top();
// }









// Find the kth largest elements in a given array

#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {10,20,-4,5,18,24,1,-7,56};
    int k=2;
    int n = sizeof(arr)/sizeof(arr[0]);
   
   sort(arr,arr+n);
   cout<<arr[n-k];
}


