#include <iostream>

using namespace std;

struct node_t {
    int val;
    struct node_t * next;
    };
node_t* head ;

void insertingAtHead(int num){
    if(head==NULL){
        node_t *newNode= new node_t;
        newNode->val= num;
        newNode->next=NULL;
        head=newNode;
    }
    else{
        node_t *newNode= new node_t;
        newNode->val= num;
        newNode->next=head;
        head=newNode;
    }
}

int main()
{
    head = NULL;
    for(int i=0;i<11;i++){
       insertingAtHead(i);
    }
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }

    return 0;
}
