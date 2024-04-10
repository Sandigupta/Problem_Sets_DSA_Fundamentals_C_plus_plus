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

void insertAtStar(Node *&head, int val)
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

void insertAtArbitaryPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtStar(head, val);
        return;
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    int current_pos = 0;
    while (current_pos != pos - 1)
    {
        temp = temp->next;
        current_pos++;
    }
    // now temp is ponting to the position pos-1
    new_node->next = temp->next;
    temp->next = new_node;
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
    insertAtStar(head, 2);
    Display(head);
    insertAtStar(head, 1);
    Display(head);
    insertAtEnd(head, 3);
    Display(head);
    insertAtArbitaryPosition(head, 4, 2);
    Display(head);
}

// Time complexcity will be of O(n)