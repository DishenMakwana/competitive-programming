#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main()
{
    priority_queue<int, vector<int>> pq; // maxHeap
    pq.push(2);                          // O(lgN)
    pq.push(3);
    pq.push(1);

    cout << pq.top() << endl; // O(1)
    pq.pop();                 // O(lgN)
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> pqm; // minHeap
    pqm.push(2);                                        // O(lgN)
    pqm.push(3);
    pqm.push(1);

    cout << pqm.top() << endl;
    pqm.pop();
    cout << pqm.top() << endl;

    return 0;
}