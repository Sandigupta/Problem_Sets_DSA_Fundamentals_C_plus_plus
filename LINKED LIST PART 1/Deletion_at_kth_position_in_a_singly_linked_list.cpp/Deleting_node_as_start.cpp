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
    head = new_node;
}

void insertAtEnd(Node *&head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void updateValue(Node *&head, int new_value, int k)
{
    // Node *new_node=new Node()
    Node *temp = head;
    int current_pos = 0;
    while (current_pos != k)
    {
        temp = temp->next;
        current_pos++;
    }

    temp->val = new_value;
}

void deletingAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
}

void Display(Node *head)
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
    Node *head = NULL;
    insertAtHead(head, 2);
    Display(head);
    insertAtHead(head, 1);
    Display(head);
    insertAtEnd(head, 3);
    Display(head);
    updateValue(head, 6, 2);
    Display(head);
    deletingAtHead(head);
    Display(head);
}

// Time complexcity is of O(1).