#include<iostream>
using namespace std;

int main(){
	char button;
	cout<<"Input a character: ";
	cin>>button;
	
//	if(button=="a"){
//		cout<<"Hello"<<endl;
//	}else if(button=="b"){
//		cout<<"Namaste"<<endl;
//	}else if(button=="c"){
//		cout<<"Salut"<<endl;
//	}else if(button=="d"){
//		cout<<"Hola"<<endl;
//	}else if(button=="e"){
//		cout<<"Ciao"<<endl;
//	}else(button=="a"){
//		cout<<"I am still learning more"<<endl;

	switch(button){
		case 'a':
			cout<<"Hello"<<endl;
			break;
		case 'b':
			cout<<"Namaste"<<endl;
			break;
		case 'c':
			cout<<"Salute"<<endl;
			break;
		case 'd':
			cout<<"Hola"<<endl;
			break;
		case 'e':
			cout<<"Ciao"<<endl;
			break;
		
		default:
			cout<<"I am stil learning"<<endl;
			break;
	}
	return 0;

}