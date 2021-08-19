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

void preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

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

void postorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int Height(Node *root) // O(N)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(Height(root->left), Height(root->right)) + 1;
}

bool isBalance(Node *root) // O(N2)
{
    if (root == NULL)
    {
        return true;
    }

    if (isBalance(root->left) == false)
    {
        return false;
    }
    if (isBalance(root->right) == false)
    {
        return false;
    }

    int lh = Height(root->left);
    int rh = Height(root->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isBalance(Node *root, int *height) // O(N)
{
    if (root == NULL)
    {
        return true;
    }

    int lh = 0, rh = 0;

    if (isBalance(root->left, &lh) == false)
    {
        return false;
    }
    if (isBalance(root->right, &rh) == false)
    {
        return false;
    }

    *height = max(lh, rh) + 1;

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int32_t main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    struct Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->left->left = new Node(3);

    if (isBalance(root))
    {
        cout << "Balanced Tree" << endl;
    }
    else
    {
        cout << "Not Balanced Tree" << endl;
    }

    int height = 0;
    if (isBalance(root1, &height))
    {
        cout << "Balanced Tree" << endl;
    }
    else
    {
        cout << "Not Balanced Tree" << endl;
    }

    return 0;
}