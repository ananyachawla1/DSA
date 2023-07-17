#include<bits/stdc++.h>
#include<list>
using namespace std;
/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */
class Node{
    public:
    int data;
    Node* next;

    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    Node* temp=new Node(newValue);
    temp->next=list;
    list=temp;
    return list;
}