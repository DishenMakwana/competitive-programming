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

int length(node *&head)
{
    int len = 0;
    node *tmp = head;

    while (tmp != NULL)
    {
        tmp = tmp->next;
        len++;
    }
    return len;
}

int intersectionPointLinkedList(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int dif = 0;
    node *ptr1;
    node *ptr2;

    if (l1 > l2)
    {
        dif = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        dif = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (dif)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
            return -1;
        dif--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
};

void intersect(node *&head1, node *&head2, int pos)
{
    node *tmp1 = head1;
    pos--;
    while (pos--)
    {
        tmp1 = tmp1->next;
    }

    node *tmp2 = head2;
    while (tmp2->next != NULL)
    {
        tmp2 = tmp2->next;
    }
    tmp2->next = tmp1;
}

int32_t main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insertAtHead(head2, 9);
    insertAtTail(head2, 10);

    insertAtHead(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);

    intersect(head1, head2, 5);

    display(head1);
    display(head2);
    cout << intersectionPointLinkedList(head1, head2) << endl;
    return 0;
}