/*question----> Given the head of a sorted linked list, delete all duplicate such that each element appaears only once. return the linked list sorted as well*/ 

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

void deleteDuplicate(Node *&head)
{
    Node *current = head;
    while (current->next  and current )
    {
        if (current->val == current->next->val)
        {
            Node *dublicate = current->next;
            current->next = current->next->next;
            delete dublicate;
        }
        else
        {
            current = current->next;
        }
    }
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
    Node *head = NULL;
    insertAtHead(head, 3);
    Dispalay(head);
    insertAtHead(head, 3);
    Dispalay(head);
    insertAtHead(head, 2);
    Dispalay(head);
    insertAtHead(head, 2);
    Dispalay(head);
    insertAtHead(head, 1);
    Dispalay(head);
    insertAtEnd(head, 3);
    Dispalay(head);
    insertAtEnd(head, 3);
    Dispalay(head);
    deleteDuplicate(head);
    Dispalay(head);
}