// Simple Inheritence
//  A
//  |
//  B

#include <bits/stdc++.h>
using namespace std;

//Base class
class Parent
{
	public:
	int id_p;
    void funP(){
        cout<<"Parent";
    }
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
	public:
	int id_c;
    void funC(){
        cout<<"Child";
    }
};

//main function
int main()
{
	
		Child obj1;
		
		// An object of class child has all data members
		// and member functions of class parent
		obj1.id_c = 7;
		obj1.id_p = 91;
		cout << "Child id is " << obj1.id_c << endl;
		cout << "Parent id is " << obj1.id_p << endl;
        cout<<"Call functions"<<endl;
        obj1.funC();
        obj1.funP();   

		
		return 0;
}
