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
    new_node->next = head; // new_node ke next me hamne first linkrd list node ke pointer ka addaras dal diya jo ke head tha.
    head = new_node;       // or abb head pointer ko ham new_node ka adders dedenge kuy ki ab Linked List new_node se start horaha hai.
}
void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val <<"->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 2);
    Display(head);
    insertAtHead(head, 1);
    Display(head);
}