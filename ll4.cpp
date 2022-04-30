#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void printList(node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<' ';
    printList(head->next);

}
node *addLast(node *head, node *temp){
    if(head==NULL){
        head = temp;
    }
    node *curr = head; 
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next=temp;
    temp->next = NULL;
    return head;
}

int main(){
    // node *head = new node(10);
    // head->next = new node(20);
    // head->next->next = new node(30);
    // head->next->next->next = new node(40);
    node *head = NULL;
    node *temp = new node(50); 
    printList(head);
    head = addLast(head,temp);
    cout<<endl;
    printList(head);
    return 0;
}