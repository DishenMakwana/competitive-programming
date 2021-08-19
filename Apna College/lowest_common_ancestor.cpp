#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int key;
    Node *left, *right;

    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

Node *findLCA(Node *&root, int n1, int n2)
{
    if (root == NULL)
        return NULL;

    if (root->key == n1 || root->key == n2)
    {
        return root;
    }

    Node *left = findLCA(root->left, n1, n2);
    Node *right = findLCA(root->right, n1, n2);

    if (left && right)
    {
        return root;
    }

    return (left != NULL) ? left : right;
};

int32_t main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "LCA(4,5) : " << findLCA(root, 4, 5)->key << endl;
    cout << "nLCA(4,6) : " << findLCA(root, 4, 6)->key << endl;
    cout << "nLCA(3,4) : " << findLCA(root, 3, 4)->key << endl;
    cout << "nLCA(2,4) : " << findLCA(root, 2, 4)->key << endl;
    cout << "nLCA(4,1) : " << findLCA(root, 4, 1)->key << endl;
    return 0;
}