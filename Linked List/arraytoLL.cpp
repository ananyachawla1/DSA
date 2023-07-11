#include<bits/stdc++.h>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node()
//     {
//         data=0;
//         next=NULL;
//     }
//     Node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }
// };

   Node* constructLL(vector<int>& arr) {
    // Write your code here
        Node* head=new Node(arr[0]);
        Node* temp=head;
        for(int i=0;i<arr.size();i++)
        {
            temp->next=new Node(arr[i]);
            temp=temp->next;
        }
        return head->next;
   }
