#include "bits/stdc++.h"
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// using queue and 2D array ans
class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (root == NULL)
        {
            return result;
        }

        queue<TreeNode *> nodesQueue;
        nodesQueue.push(root);
        bool leftToRight = true;

        while (!nodesQueue.empty())
        {
            int size = nodesQueue.size();
            vector<int> row(size);
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = nodesQueue.front();
                nodesQueue.pop();

                // find position to fill node's value
                int index = (leftToRight) ? i : (size - 1 - i);

                row[index] = node->val;
                if (node->left)
                {
                    nodesQueue.push(node->left);
                }
                if (node->right)
                {
                    nodesQueue.push(node->right);
                }
            }
            // after this level
            leftToRight = !leftToRight;
            result.push_back(row);
        }
        return result;
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
};

// using 2*stack and 1D array ans
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