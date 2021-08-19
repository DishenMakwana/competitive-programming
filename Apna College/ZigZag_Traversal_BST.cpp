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

void ZigZagTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    stack<Node *> currLevel, nextLevel;
    bool leftToRight = true;

    currLevel.push(root);

    while (!currLevel.empty())
    {
        Node *tmp = currLevel.top();
        currLevel.pop();

        if (tmp != NULL)
        {
            cout << tmp->data << " ";

            // left to right
            if (leftToRight)
            {
                if (tmp->left)
                {
                    nextLevel.push(tmp->left);
                }
                if (tmp->right)
                {
                    nextLevel.push(tmp->right);
                }
            }
            // right to left
            else
            {
                if (tmp->right)
                {
                    nextLevel.push(tmp->right);
                }
                if (tmp->left)
                {
                    nextLevel.push(tmp->left);
                }
            }
        }

        if (currLevel.empty())
        {
            leftToRight = !leftToRight;
            swap(currLevel, nextLevel);
        }
    }
}

int32_t main()
{
    Node *root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);

    ZigZagTraversal(root);
    return 0;
}