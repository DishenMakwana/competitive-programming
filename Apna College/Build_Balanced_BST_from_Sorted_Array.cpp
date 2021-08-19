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

void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

Node *sortedArrToBST(int a[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;
    Node *root = new Node(a[mid]);

    root->left = sortedArrToBST(a, start, mid - 1);
    root->right = sortedArrToBST(a, mid + 1, end);

    return root;
}

int32_t main()
{
    int a[] = {10, 20, 30, 40, 50};
    Node *root = sortedArrToBST(a, 0, 4);
    preorder(root);
    return 0;
}