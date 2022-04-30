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
node *addBegin(node *head, node *temp){
    temp->next = head;
    return temp;
}

int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    node *temp = new node(5); 
    printList(head);
    head = addBegin(head,temp);
    cout<<endl;
    printList(head);
    return 0;
}