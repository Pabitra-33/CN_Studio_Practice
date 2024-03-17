#include<iostream>
#include<bits/stdc++>

using napespace std;

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

Node *findMiddle(Node *head) {
    // Write your code here
    Node*ans=head;

   Node*temp=head;

   int count=0;

   while(temp!=NULL){

       temp=temp->next;

       count+=1;

       if(count%2==0){

           ans=ans->next;

       }

   }

   return ans;
}

