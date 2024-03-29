#include <iostream>
#include <string>
using namespace std;
template <class T>
class Stack
{
 public:
 Stack();
 void push(T i);
 T pop();
 private:
 int top;
 T st[100];
};
template <class T>
Stack<T>::Stack()
{
 top = -1;
}
template <class T>
void Stack<T>::push(T i)
{
 st[++top] = i;
}
template <class T>
T Stack<T>::pop()
{
 return st[top--];
}
int main ()
{
 Stack<int> int_stack;
 Stack<string> str_stack;
 Stack<float> float_stack;
 
 int_stack.push(10);
 float_stack.push(5.5);
 str_stack.push("World");
 
 cout << int_stack.pop() << endl;
 cout << float_stack.pop() << endl;
 cout << str_stack.pop() << endl;
}