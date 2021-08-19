#include <iostream>
using namespace std;

#include <set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <stack>

#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define pb push_back
#define setBits(x) builtin_popcount(x)

class node
{
public:
    int key;
    node *left, *right;

    node(int key_)
    {
        key = key_;
        left = right = NULL;
    }
};

void getVerticalorder(node *root, int hdis, map<int, vi> &m)
{
    if (root == NULL)
        return;

    m[hdis].push_back(root->key);

    getVerticalorder(root->left, hdis - 1, m);
    getVerticalorder(root->right, hdis + 1, m);
}

// binary tree as a array representation
signed main()
{
    node *root = new node(10);
    root->left = new node(7);
    root->right = new node(4);
    root->left->left = new node(3);
    root->left->right = new node(11);
    root->right->left = new node(14);
    root->right->right = new node(6);

    map<int, vi> m;
    int hdis = 0;

    getVerticalorder(root, hdis, m);

    for (auto x : m)
    {
        for (auto y : x.ss)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}