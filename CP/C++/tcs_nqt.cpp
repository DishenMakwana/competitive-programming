#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int it_no;
    string name;
    float price;
    int stock;

    node(int it_no, string name, float price, int stock)
    {
        this->it_no = it_no;
        this->name = name;
        this->price = price;
        this->stock = stock;
    }
};

struct Node
{
    int it_no;
    string name;
    float price;
    int stock;

    Node(int it_no, string name, float price, int stock)
    {
        this->it_no = it_no;
        this->name = name;
        this->price = price;
        this->stock = stock;
    }
};

int32_t main()
{
    vector<node> prd;
    prd.push_back(node(101, "Milk", 55, 10));
    prd.push_back(node(102, "Bread", 25, 25));
    prd.push_back(node(103, "Chips", 15, 20));
    prd.push_back(node(104, "Chocolate", 35, 15));

    vector<Node> prd1;
    prd1.push_back(Node(101, "Milk", 55, 10));
    prd1.push_back(Node(102, "Bread", 25, 25));
    prd1.push_back(Node(103, "Chips", 15, 20));
    prd1.push_back(Node(104, "Chocolate", 35, 15));

    int n, q;
    cin >> n >> q;

    bool f = false;
    for (auto &it : prd)
    {
        if (it.it_no == n)
        {
            if (it.stock >= q)
            {
                cout << fixed << setprecision(1) << (q * it.price) << " INR" << endl;
                cout << (it.stock - q) << " IN STOCK" << endl;
                f = true;
                break;
            }
            else if (it.stock < q)
            {
                cout << "NOT IN STOCK" << endl;
                cout << it.stock << " IN STOCK" << endl;
                f = true;
                break;
            }
        }
    }

    if (!f)
    {
        cout << "INVALID INPUT" << endl;
    }

    return 0;
}