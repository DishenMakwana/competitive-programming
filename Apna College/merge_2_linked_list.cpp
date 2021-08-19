#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val) // head by reference
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = n;
}

void insertAtHead(node *&head, int val) // head by reference
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void display(node *head) // head by value
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " -> ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

bool search(node *head, int key)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->data == key)
        {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

void deleteAtHead(node *&head) // head by reference
{
    node *toDelete = head;
    head = head->next;
    delete toDelete;
}

void deletion(node *&head, int val) // head by reference
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    node *tmp = head;
    while (tmp->next->data != val)
    {
        tmp = tmp->next;
    }

    node *toDelete = tmp->next;
    tmp->next = tmp->next->next;

    delete toDelete;
}

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummy = new node(-1);
    node *p3 = dummy;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummy->next;
}

node *mergeRecursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node *res;
    if (head1->data < head2->data)
    {
        res = head1;
        res->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        res = head2;
        res->next = mergeRecursive(head1, head2->next);
    }

    return res;
}

int32_t main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    int a1[] = {1, 4, 5, 7};
    int a2[] = {2, 3, 6};
    for (int i = 0; i < *(&a1 + 1) - a1; i++)
    {
        insertAtTail(head1, a1[i]);
    }

    for (int i = 0; i < *(&a2 + 1) - a2; i++)
    {
        insertAtTail(head2, a2[i]);
    }

    display(head1);
    display(head2);

    // node *newHead = merge(head1, head2);
    node *newHead = mergeRecursive(head1, head2);
    display(newHead);
    return 0;
}