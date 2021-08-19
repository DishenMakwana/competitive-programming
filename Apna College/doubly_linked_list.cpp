#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;

    if (head != NULL)
    {
        head->prev = n;
    }

    head = n;
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = n;
    n->prev = tmp;
}

void display(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " -> ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

void deleteAtHead(node *&head)
{
    node *toDelete = head;
    head = head->next;
    head->prev = NULL;

    delete toDelete;
}

void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *tmp = head;
    int cnt = 1;

    while (tmp != NULL && cnt != pos)
    {
        tmp = tmp->next;
        cnt++;
    }

    tmp->prev->next = tmp->next;
    if (tmp->next != NULL)
    {
        tmp->next->prev = tmp->prev;
    }

    delete tmp;
}

int32_t main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    insertAtHead(head, 6);
    display(head);

    deletion(head, 5);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}