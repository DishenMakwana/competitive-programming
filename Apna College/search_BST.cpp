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

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = insertBST(root->right, val);
    }

    return root;
}

Node *searchInBST(Node *root, int key) // O(logN)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }

    if (root->data > key)
    {
        return searchInBST(root->left, key);
    }

    return searchInBST(root->right, key);
}

int32_t main()
{
    struct Node *root = NULL;
    root = insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 6);

    // inorder(root);
    if (searchInBST(root, 7) == NULL)
    {
        cout << "Key doesn't exist" << endl;
    }
    else
    {
        cout << "Key exists" << endl;
    }

    return 0;
}