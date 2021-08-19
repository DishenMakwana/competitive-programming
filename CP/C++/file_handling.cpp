#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
 string name;
 int telephone;
 fstream file1;
 file1.open("list.txt",ios::in|ios::out);
 while(!file1.eof())
 {
 file1>>name;
 file1>>telephone;
 cout << std::left << setw(30) << name;
 cout << std::right << setw(12) << telephone << endl;
 }
 return 0;
}

/*
  #include<fstream>
using namespace std;
int main()
{
 fstream file1, file2;
 char ch;
 int count;
 
 file1.open("file1.txt",ios :: out);
 cout << "\n\t Press z and 'enter key' to quit \n\n";
 cout << "\nEnter the data \n";
 cin.get(ch);
 while(ch != 'z')
 {
 file1.put(ch);
 cin.get(ch);
 }
 file1.close();
 file1.open("file1.txt",ios :: in);
 cout << "\nFirst file contents \n";
 while(file1)
 {
 file1.get(ch);
 cout<<ch;
 }
 file1.close();
 file1.open("file1.txt",ios::in);
 file2.open("file2.txt",ios :: out );
 cout<<"\nFirst file contents copied to second file... \n";
 while(!file1.eof())
 {
 ch = (char)file1.get( ); //hhh www
 if(isspace(ch))
 count++;
 if(count >= 2)
 {
 ch=' ';
 count = 0;
 }
 else
 {
 file2 <<ch;
 }
 
 }
 file1.close();
 file2.close();
 file2.open("file2.txt",ios :: in);
 cout << "\nSecond file contents \n";
 while(!file2.eof())
 {
 file2.get(ch);
 cout<<ch;
 }
 file2.close();
 return 0;
}
*/