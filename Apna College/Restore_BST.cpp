#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void calcPointer(Node *root, Node **first, Node **mid, Node **last, Node **prev)
{
    if (root == NULL)
    {
        return;
    }

    calcPointer(root->left, first, mid, last, prev);

    if (*prev && root->data < (*prev)->data)
    {
        if (!*first) // first time condition violation
        {
            *first = *prev;
            *mid = root;
        }
        else
        {
            *last = root;
        }
    }

    *prev = root;

    calcPointer(root->right, first, mid, last, prev);
}

void restoreBST(Node *root)
{
    Node *first, *mid, *last, *prev;
    first = mid = last = prev = NULL;

    calcPointer(root, &first, &mid, &last, &prev);

    //case 1
    if (first && last)
    {
        swap(&(first->data), &(last->data));
    }
    // case 2
    else if (first && mid)
    {
        swap(&(first->data), &(mid->data));
    }
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int32_t main()
{
    Node *root = new Node(6);
    root->left = new Node(4);
    root->right = new Node(9);
    root->left->right = new Node(3);
    root->left->left = new Node(1);
    root->right->right = new Node(13);

    cout << "Before Restore : ";
    inorder(root);
    cout << endl;

    restoreBST(root);

    cout << "After Restore :  ";
    inorder(root);
    cout << endl;

    return 0;
}