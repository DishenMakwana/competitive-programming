#include<iostream>
using namespace std;
template<class T>
class vector
{
 int size;
 T *v;
 public:
 vector(); 
 void modify();
 void display();
};
template<class T>
vector<T>::vector()
{
 cout<<"\nEnter Number of Co-ordinates : ";
 cin>>size; 
 v=new T[size];
 
 cout<<"\nEnter " << size << " Co-ordinates : \n";
 for(int i=0; i<size; i++)
 {
 cout<<" ";
 cin>>v[i];
 }
}
template<class T>
void vector<T>::modify() //Function for Modifying the Co-ordinates
{
 int elem;
 cout<<"\nEnter index of element you want to modify ";
 cin>>elem;
 
 if(elem>size)
 {
 cout<<"Index position cann't be greater than size of vecotr";
 }
 else
 {
 if(elem<0)
 {
 cout<<"Index can not be negative. So initializing as 0";
 elem=0;
 }
 cout<<"\nEnter new value:\n";
 cin>>v[elem];
 }
}
template<class T>
void vector<T>::display() //Displaying the vector
{
 cout<<"\nVector : (";
 for(int i=0; i<size; i++)
 {
 cout<<v[i];
 if(i!=size-1)
 cout<<",";
 }
 cout<<")";
}
int main()
{
 vector <int>v;
 v.display();
 v.modify();
 v.display();
 return 0;
}