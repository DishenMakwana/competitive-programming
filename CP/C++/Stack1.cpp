#include<iostream>
#include<cstring>
using namespace std;

class Stack
{
private:
    char *data;
    int top;
public:
    Stack(size_t =10);
    ~Stack()
    {
    cout << endl << "Dtor:"<<endl;
    delete data;
    }
    int empty() {return (top==-1);}
    void push(char x) {data[++top]=x;}
    void pop() {--top;}
    char peek() {return data[top];}
};
Stack::Stack(size_t s): data(new char[s]),top(-1)
{
    cout << "stack create with size = " << s << endl;
}
/*Stack::~Stack()
{
    cout << endl << "Dtor:"<<endl;
    delete data;
}*/

int main()
{

    char str[100];
    cout << "Enter string:";
    cin >> str;
    Stack s(strlen(str));
    cout << endl;
    for(int i=0;i<strlen(str);i++)
        s.push(str[i]);

    while(!s.empty())
    {
        cout << s.peek();
        s.pop();
    }
    return 0;
}
