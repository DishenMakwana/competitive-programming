#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

ostream &rightarrow(ostream &op) 
{
  op << " --> ";
  return op;
}

istream &getname(istream &ip) 
{
  cout << "enter your name"<<endl;
  return ip;
}

int main()
{
    string name;
    cin >> getname >> name;
    cout << rightarrow << name <<endl;
}