#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

Node *head;

void insertion(int newdata){
   Node* newnode = new Node;
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
   }

void removeNode(int num){
    while(head!=NULL){
        if(head->data==num){
            Node *temp= head->prev ;
            head->prev=head->next;
            head->next=temp;
            return;
        }
        head=head->next;
    }

   }


int main()
{
    head=NULL;
    insertion(1);
    insertion(2);
    insertion(3);
    insertion(4);
    insertion(5);
    Node *temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    removeNode(3);
    while(head!= NULL){
        cout<<head->data<<" ";
        head=head->next;
    }


    return 0;
}
