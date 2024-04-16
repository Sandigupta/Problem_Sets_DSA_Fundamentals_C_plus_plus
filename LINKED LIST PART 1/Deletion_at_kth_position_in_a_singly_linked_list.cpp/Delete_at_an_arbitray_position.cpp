#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
     head=new_node;
}

void insertAtEnd(Node *&head,int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void deleteAtArbitraryPos(Node *&head, int pos)
{
    Node *temp = head;
    int current_pos = 0;
    while (current_pos != pos-1)
    {
        temp = temp->next;
        current_pos++;
    }
    Node *temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
}

void Dispalay(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head=NULL;
    insertAtHead(head, 3);
    Dispalay(head);
    insertAtHead(head, 2);
    Dispalay(head);
    insertAtHead(head, 1);
    Dispalay(head);
    insertAtEnd(head, 4);
    Dispalay(head);
    deleteAtArbitraryPos(head, 2);
    Dispalay(head);
}