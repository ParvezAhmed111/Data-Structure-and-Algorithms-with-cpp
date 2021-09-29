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

class C{
	public:
	int C=100;
	void funC(){
        cout<<"Function C"<<endl;
	}
	
};

class D: public B, public C{
	public:
	int D=500;
		
};

//main function
int main(){
	
		D obj;
		obj.funA();
		obj.funB();
		obj.funC();
		cout<<obj.A<<" "<<obj.B<<" "<<obj.C<<" "<<obj.D<<endl;
		
		return 0;
}
