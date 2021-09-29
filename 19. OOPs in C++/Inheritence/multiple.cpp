// Multiple Inheritence
//	 A		B
// 	   \   /
// 	     C

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

class B{
	public:
	int B=67;
    void funB(){
        cout<<"Function B"<<endl;
    }
};

class C: public A, public B{
	public:
	int C=100;
	
};

//main function
int main(){
	
		C obj;
		obj.funA();
		obj.funB();
		cout<<obj.A<<" "<<obj.B<<" "<<obj.C<<endl;
		
		return 0;
}
