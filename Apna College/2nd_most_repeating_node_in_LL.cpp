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

int size(node *&head)
{
    int count = 0;
    node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void second_largest(node *&head)
{
    if (size(head) < 2)
    {
        cout << "\nNo second largest element";
    }
    else if (size(head) == 2)
    {
        if (head->next->data > head->data)
        {
            cout << head->data << endl;
            return;
        }
    }
    else
    {

        unordered_map<int, int> m;
        node *tmp = head;

        while (tmp != NULL)
        {
            m[tmp->data]++;
            tmp = tmp->next;
        }

        int max = INT_MIN;
        int second_max = INT_MIN;

        for (auto &x : m)
        {
            if (x.second > max)
            {
                second_max = max;
                max = x.second;
            }
            else if (x.second > second_max)
            {
                second_max = x.second;
            }
        }

        cout << second_max << endl;
    }
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 5);
    insertAtTail(head, 4);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    insertAtTail(head, 1);

    second_largest(head);
    display(head);
}