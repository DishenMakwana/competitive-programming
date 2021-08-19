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

Node *inorderSucc(Node *root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
}

Node *deleteInBST(Node *root, int key)
{
    if (root->data > key)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        // case 2 -> right subtree is present
        if (root->left == NULL)
        {
            Node *tmp = root->right;
            free(root);
            return tmp;
        }
        //case 1
        else if (root->right == NULL)
        {
            Node *tmp = root->left;
            free(root);
            return tmp;
        }
        //case 3 -> both left and right subtree is present
        else
        {
            Node *tmp = inorderSucc(root->right);
            root->data = tmp->data;
            // tmp->data have duplicate value so we need to delete it.
            root->right = deleteInBST(root->right, tmp->data);
        }
    }
    return root;
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

    inorder(root);
    cout << endl;
    root = deleteInBST(root, 5); // case 2
    inorder(root);
    cout << endl;
    root = deleteInBST(root, 5); // case 3
    inorder(root);

    return 0;
}