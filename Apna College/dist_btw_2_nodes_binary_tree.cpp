#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
        return root;

    if (root->data == n1 || root->data == n2)
        return root;

    Node *left = LCA(root->left, n1, n2);
    Node *right = LCA(root->right, n1, n2);

    if (left != NULL && right != NULL)
        return root;
    if (left == NULL && right == NULL)
        return NULL;
    if (left != NULL)
        return LCA(root->left, n1, n2);

    return LCA(root->right, n1, n2);
}

int findLevel(Node *root, int k, int level)
{
    if (root == NULL)
        return -1;

    if (root->data == k)
        return level;

    int left = findLevel(root->left, k, level + 1);

    if (left != -1)
        return left;

    return findLevel(root->right, k, level + 1);
}

int findDistance(Node *root, int n1, int n2)
{
    Node *lca = LCA(root, n1, n2);

    int d1 = findLevel(lca, n1, 0);
    int d2 = findLevel(lca, n2, 0);

    return d1 + d2;
}

int32_t main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << findDistance(root, 4, 7) << endl;

    return 0;
}