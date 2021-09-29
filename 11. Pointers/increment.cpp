#include<iostream>
using namespace std;

void increment(int *a){
	(*a)++;
}

int main(){
	
	int a=3;
//	int *aptr=&a;
//	increment(aptr);
	increment(&a);
	
	cout<<a<<endl;

	return 0; 
}
