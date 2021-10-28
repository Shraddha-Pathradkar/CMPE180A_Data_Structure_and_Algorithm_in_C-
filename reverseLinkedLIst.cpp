#include <iostream>
using namespace std;

struct Nodetype{
    int data;
    Nodetype *link;
};

Nodetype *head = NULL;

void insertingNode(int num){
    if(head==NULL){
        Nodetype *newNode = new Nodetype;
        newNode->data= num;
        newNode->link=NULL;
        head=newNode;
    }
    else{

        Nodetype *current;
        current=head;
        Nodetype *newNode = new Nodetype;

        while(current->link !=NULL){
            current=current->link;
        }
        newNode->data=num;
        newNode->link=NULL;
        current->link= newNode;

    }

}
void reverseLinkedList(){
    Nodetype *current;
    current=head;
    Nodetype *prev= NULL;
    Nodetype *next= NULL;

    while(current != NULL){
        next= current->link;
        current->link= prev;
        prev= current;
        current=next;

    }
    head= prev;
}

int main()
{

    for(int i=1;i<11;i++){
        insertingNode(i);
    }
   // 1->2->3->4->5->6->7->8->9->10
    reverseLinkedList();
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->link;
    }
    return 0;
}
