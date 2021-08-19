#include<iostream>
using namespace std;
enum month
{ 
january=1,february,march,april,may,june,july,august,september, 
october,november,december
 };
int main()
{ 
 month currentMonth;
 currentMonth=december;
 cout<<"The Month is December"<<endl;
 
 //cin not working with Enum
 
 /* Printing comments on current Month */
 if(currentMonth>=march && currentMonth<=may)
 {
 cout<<"Yay, It is Spring!"<<endl;
 }
 else if(currentMonth>=6 && currentMonth<=august)
 {
 cout<<"It is Summer, Who needs an Ice Cream?"<<endl;
 }
 else if(currentMonth>=september && currentMonth<=november)
 {
 cout << "I am enjoying Autumn, Aren't You?" << endl;
 }
 else
 {
 cout << "Ooh, It is very cold outside! It's Winter!\n";
 } 
 
 return 0;
}
