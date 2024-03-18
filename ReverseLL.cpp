#include<iostream>
#include<bits/stdc++>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };
        

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node*current=head;

    Node*previous=NULL;

    Node*Next=NULL;

    while(current!=NULL){

        Next=current->next;

        current->next=previous;

        previous=current;

        current=Next;

    }

    head=previous;

    return head;
}
