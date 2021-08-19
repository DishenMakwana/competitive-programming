/*
//Single Inheritance
#include <iostream> 
using namespace std;
  
class Vehicle
{
 public:
 Vehicle()
 {
 cout << "This is a Vehicle" << endl;
 }
};
 
//sub class derived from two base classes 
class Car: public Vehicle{
 
};
 
int main()
{ 
 Car obj;
 return 0;
}

/*Output:
This is a Vehicle*/
  
*/
  
/*  
//Multiple Inheritance
//
#include <iostream> 
using namespace std;
  
class Vehicle
{
 public:
 Vehicle()
 {
 cout << "This is a Vehicle" << endl;
 }
};
 
class FourWheeler
{
  public:
 FourWheeler()
 {
 cout << "This is a 4 wheeler Vehicle" << endl;
 }
};

class Car: public Vehicle, public FourWheeler {};
 
int main()
{ 
 Car obj;
 return 0;
}
 
/*Output:
This is a Vehicle
This is a 4 wheeler Vehicle*/
*/
  

/*  
//Multilevel Inheritance
#include <iostream> 
using namespace std;
 
class Vehicle 
{
 public:
 Vehicle()
 {
 cout << "This is a Vehicle" << endl;
 }
};
class fourWheeler: public Vehicle
{ 
 public:
 fourWheeler()
 {
 cout<<"Objects with 4 wheels are vehicles"<<endl;
 }
};

 
class Car: public fourWheeler
{
 public:
 Car()
 { 
 cout<<"Car has 4 Wheels"<<endl;
 }
};

int main()
{ 
 Car obj;
 return 0;
} 

/*Output:
This is a Vehicle
Objects with 4 wheels are vehicles
Car has 4 Wheels*/
*/
  
/*
//Hierarchical Inheritance

#include <iostream> 
using namespace std;
  
class Vehicle 
{
 public:
 Vehicle()
 {
 cout << "This is a Vehicle" << endl;
 }
};
  
class Car: public Vehicle
{};
 
class Bus: public Vehicle
{};
 
int main()
{ 
 Car obj1;
 Bus obj2;
 return 0;
}

/*Output:
This is a Vehicle
This is a Vehicle*/
*/
  

/*  
//Hybrid Inheritance

#include <iostream> 
using namespace std;
 
class Vehicle 
{
 public:
 Vehicle()
 {
 cout << "This is a Vehicle" << endl;
 }
};
 
class Fare
{
 public:
 Fare()
 {
 cout<<"Fare of Vehicle\n";
 }
};
  
class Car: public Vehicle
{};

class Bus: public Vehicle, public Fare
{};

int main()
{ 
 Bus obj2;
 return 0;
}

/*Output:
This is a Vehicle
Fare of Vehicle*/
*/