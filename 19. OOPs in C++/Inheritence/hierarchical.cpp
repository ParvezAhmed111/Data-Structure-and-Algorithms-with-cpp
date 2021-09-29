//Hierarchical Inheritence

// 	     A
// 	   /   \
// 	  B	    C
//   / \    / \
//  D   E  F   G



#include <bits/stdc++.h>
using namespace std;

//Base class
class A{
	public:
	int A=10;
    void funA(){
        cout<<"Function A"<<endl;
    }
};

class B: public A{
	public:
	int B=67;
    void funB(){
        cout<<"Function B"<<endl;
    }
};

class C: public A{
	public:
	int C=100;
	void funC(){
        cout<<"Function C"<<endl;
	}
	
};


//main function
int main(){
	
		B objB;
		objB.funA();
		objB.funB();
		cout<<objB.A<<" "<<objB.B<<endl;


		C objC;
		objC.funA();
		objC.funC();
		cout<<objC.A <<" "<<objC.C<<endl;
		
		return 0;
}
