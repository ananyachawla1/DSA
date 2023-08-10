#include<bits/stdc++.h>
using namespace std;
void preorder (TreeNode *node,vector <int>&result){

 

    if(node==nullptr){

        return;

    }

    result.push_back(node->data);

    preorder(node->left,result);

    preorder(node->right,result);

}

 

void inorder(TreeNode *node,vector <int>&result){

 

    if(node==nullptr){

        return;

    }

    inorder(node->left,result);

    result.push_back(node->data);

inorder(node->right,result);

}

void postorder(TreeNode *node,vector <int>&result){

 

     if(node==nullptr){

        return;

    }

    postorder(node->left,result);

postorder(node->right,result);

    result.push_back(node->data);

 

}

vector<vector<int>> getTreeTraversal(TreeNode *root){

    // Write your code here.

        vector<vector<int>> traversal;

   vector<int> inorderTraversal, preorderTraversal, postorderTraversal;

 

    inorder(root, inorderTraversal);

    preorder(root, preorderTraversal);

    postorder(root, postorderTraversal);

 

    traversal.push_back(inorderTraversal);

    traversal.push_back(preorderTraversal);

    traversal.push_back(postorderTraversal);

 

    return traversal;

}