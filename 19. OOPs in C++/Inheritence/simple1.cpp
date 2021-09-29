// C++ program to explain
// Single inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle()	//constructor
	{
	cout << "This is a Vehicle" << endl;
	}
};

// sub class derived from a single base classes
class Car: public Vehicle{

};

// main function
int main()
{
	// creating object of sub class will invoke the constructor of base classes
	// Vehicle obj1;
	
	Car obj;
	return 0;
}
