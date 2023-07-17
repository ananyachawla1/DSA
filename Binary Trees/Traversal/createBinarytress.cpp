#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

Node* solve(vector<int>&arr,int i,int n)
{
    Node* root=NULL;
    if(i<n)
    {
        root=new Node(arr[i]);
        root->left=solve(arr,i*2+1,n);
        root->right=solve(arr,i*2+2,n);
    }
    return root;
}

Node* createTree(vector<int>&arr){
    // Write your code here.
    return solve(arr,0,arr.size());
}