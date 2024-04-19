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

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void insertAtHead(int val)
    {
        Node *new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void Dispaly()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

Node *reverseTheNodes(Node *&head)
{
    Node *prevptr = NULL;
    Node *currentptr = head;

    // currentptr->next = prevptr;
    // move all 3 ptrs by one step ahead
    while (currentptr != NULL)
    {
        Node *nextptr = currentptr->next;
        currentptr->next = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
    }
    Node *new_node = prevptr;
    return new_node;
}

int main()
{
    LinkedList ll;
    ll.insertAtHead(3);
    ll.insertAtHead(2);
    ll.insertAtHead(1);
    ll.insertAtEnd(4);
    ll.Dispaly();
    ll.head = reverseTheNodes(ll.head);
    ll.Dispaly();
    return 0;
}
