#include "bits/stdc++.h"
using namespace std;

/*Complete the function below
Node is as follows:*/
struct Node
{
    int key;
    struct Node *left, *right;

    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

Node *traversal(int inorder[], int levelOrder[], int i, int j)
{
    if (i > j)
    {
        return NULL;
    }

    int mid = (i + j) / 2;
    Node *node = new Node(inorder[mid]);
    node->left = traversal(inorder, levelOrder, i, mid - 1);
    node->right = traversal(inorder, levelOrder, mid + 1, j);

    return node;
}

Node *buildTree(int inorder[], int levelOrder[], int iStart, int iEnd, int n)
{
    //add code here.
    Node *root = traversal(inorder, levelOrder, 0, n - 1);
    return root;
}

int32_t main()
{
    return 0;
}