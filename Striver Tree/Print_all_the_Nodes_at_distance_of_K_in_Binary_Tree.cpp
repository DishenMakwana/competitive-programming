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

class Solution
{
public:
    void markParent(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent_track, TreeNode *target)
    {
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *curr = q.front();
            q.pop();

            if (curr->left)
            {
                parent_track[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right)
            {
                parent_track[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }

    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        unordered_map<TreeNode *, TreeNode *> parent_track; // node -> parent
        markParent(root, parent_track, target);

        unordered_map<TreeNode *, bool> visited;
        queue<TreeNode *> q;
        q.push(target);

        visited[target] = true;
        int curr_level = 0;

        while (!q.empty())
        {
            int size = q.size();

            if (curr_level++ == k)
                break;

            for (int i = 0; i < size; ++i)
            {
                TreeNode *curr = q.front();
                q.pop();

                if (curr->left && !visited[curr->left]) // left-child
                {
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if (curr->right && !visited[curr->right]) // right-child
                {
                    q.push(curr->right);
                    visited[curr->right] = true;
                }

                if (parent_track[curr] && !visited[parent_track[curr]]) // parent
                {
                    q.push(parent_track[curr]);
                    visited[parent_track[curr]] = true;
                }
            }
        }

        vector<int> ans;
        while (!q.empty())
        {
            TreeNode *cur = q.front();
            q.pop();

            ans.push_back(cur->val);
        }

        return ans;
    }
};

int32_t main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    Solution s;
    vector<int> ans = s.distanceK(root, root->left, 2);

    for (auto &x : ans)
        cout << x << " ";

    return 0;
}