#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void inorder(Node* root,vector<int>& arr) {
    if (root == NULL) return;
    inorder(root->right,arr);
    arr.push_back(root->val);
    inorder(root->left,arr);
}

void preorder(Node* root,vector<int>& arr, int& i) {
    if (root == NULL) return;
    root->val = arr[i++];
    preorder(root->left,arr,i);
    preorder(root->right,arr, i);
}

void levelOrderQueue(Node* root){  //bfs
     queue<Node*> q;
     q.push(root);
     while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
     }
     cout<<endl;
}

void print(vector<int> arr){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
   vector<int> arr; //reverse inorder
   inorder(a,arr);
   levelOrderQueue(a);
   int i=0;
//    print(arr);
//    cout<<endl;
   preorder(a,arr,i);
   levelOrderQueue(a);
}