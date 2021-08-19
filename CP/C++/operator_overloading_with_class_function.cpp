#include<iostream>
using namespace std;
class bird
{
 int weight;
 string name;
 public:
 bird(char *nm, int w)
 {
 name = nm; weight = w;
 }
 void display()
 {
 cout<<"Bird="<<name<<", Weight="<<weight<<endl;
 }
 int operator <= (bird);
};
int bird::operator <= (bird b)
{
 if(weight>=b.weight)
 return 1;
 else
 return 0;
}
int main()
{
 bird b1("eagle",10),b2("parrot",5);
 cout<<"Two birds are\n";
 b1.display();
 b2.display();
 if(b1<=b2)
 {
 cout<<"\nBird-1 has higher weight";
 }
 else
 {
 cout<<"\nBird-2 has higher weight";
 }
 return 0;
}


/*
  #include <iostream>
using namespace std;
class Book
{
 char title[10], author[10],publisher[10];
 public:
 friend ostream &operator<<( ostream &output, const Book &B )
 {
output<<"\nTitle : "<< B.title<< "\nAuthor : "<<B.author<<
"\nPublisher:"<<B.publisher;
 return output; 
 }
 friend istream &operator>>( istream &input, Book &B )
 {
 input >> B.title >> B.author >> B.publisher;
 return input; 
 }
};
int main()
{
 Book B1;
 cout<<"Enter the value of Book title, author, publisher: "<<endl;
 cin >> B1;
 cout << "\n---Book Details---" << B1;
 return 0;
}
Output:
Enter the value of Book title, author, publisher :
OOPC++
Balaguru
TATA
---Book Details---
Title : OOPC++
Author : Balaguru
Publisher:TATA
*/
