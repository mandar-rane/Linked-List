#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void printLL(Node* head){
    Node* temp = head;
    cout<<"\n----------"<<endl;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<"\n----------";
}

int main(){
    int val, choice;
    Node *head, *newnode, *temp;
    head = NULL;
    while(choice){
        newnode = new Node;
        cout<<"\nEnter data of node: ";
        cin>>newnode ->data;
        newnode -> next = NULL;
        if (head == NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp -> next = newnode;
            temp = newnode;
        }
        cout<<"Do you want to continue(1/0)? ";
        cin>>choice;
    }
    printLL(head);
    return 0;
}