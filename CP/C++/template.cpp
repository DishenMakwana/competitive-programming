#include<iostream>
using namespace std;
template<typename T>
T minimum(T a[],int size) //template function
{
 T min=a[0];
 for(int i=0;i<size;i++)
 {
 if(a[i]<min)
 min=a[i];
 }
 return min;
}
int main()
{
 int a[10],size,i,min1;
 float b[10],min2;
 
 cout<<"enter the size value:\n";
 cin>>size;
 cout<<"enter the integer array elements\n";
 for(i=0;i<size;i++)
 {
 cin>>a[i];
 } 
 
 cout<<"enter the floating array elements\n";
 for(i=0;i<size;i++)
 {
 cin>>b[i];
 } 
 
 min1=minimum(a,size);
 min2=minimum(b,size);
 
 cout<<"The minimum integer elements is:\n";
 cout<<min1;
 cout<<"\nThe minimum floating elements is :\n";
 cout<<min2;
 
 return 0;
}