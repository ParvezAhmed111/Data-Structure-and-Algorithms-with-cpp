#include <bits/stdc++.h>
using namespace std;

//Base class
class base{
	public:
	//virtual function is redefined in the base class
    virtual void print(){
        cout<<"print base class"<<endl;
    }
    void show(){
        cout<<"show base class"<<endl;
    }
};

class derived: public base{
	public:
	void print(){
        cout<<"print derived class"<<endl;
    }
    void show(){
        cout<<"show derived class"<<endl;
    }
};

//main function
int main(){

    base *basePtr;  //pointer of base class 
    derived obj;
    
    // pointer of base class 
    // pointed to object of derieved class
    basePtr= &obj;

    basePtr->print();
    basePtr->show();
    
    return 0;
}
