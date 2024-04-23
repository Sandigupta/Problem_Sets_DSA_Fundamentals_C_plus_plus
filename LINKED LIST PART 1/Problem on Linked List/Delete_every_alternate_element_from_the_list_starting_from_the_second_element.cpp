// QUESTION---------------------
/*Given the head of a linked list, delete every alternate element from the list stsrting from the second element.*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head,int val){
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtEnd(Node *&head,int val){
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void deleteAlternative(Node *&head){
    Node *curr_node = head;
    while(curr_node!=NULL and curr_node->next!=NULL)
    {
        Node *temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
    }
    
}

void Dispalay(Node *head){
    Node *temp = head;
    while (temp!=NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node *head=NULL;
    insertAtHead(head, 3);
    Dispalay(head);
    insertAtHead(head, 2);
    Dispalay(head);
    insertAtHead(head, 1);
    Dispalay(head);
    insertAtEnd(head, 4);
    Dispalay(head);
    insertAtEnd(head, 5);
    Dispalay(head);
    deleteAlternative(head);
    Dispalay(head);
}