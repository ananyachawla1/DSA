


#include<bits/stdc++.h>
#include<list>

using namespace std;
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };



int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    while(head->next!=NULL)
    {
        if(head->data==k)
        {
            return 1;

        }
        else
        head=head->next;

    }
    if(head->data==k&&head->next==NULL)
    return 1;
    else 
    return 0;
}