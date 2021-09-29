#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	
	string str="ashgsuydfdsayu";
	
//	cout<<'a'-'A'<<endl;  //32
//	cout<<'A'-'a'<<endl;  //-32
	
	//convert into upper case
	
	for(int i =0; i<str.size(); i++){
		if(str[i] >= 'a' && str[i]<= 'z'){
			str[i]=str[i]-32;
			//str[i]-=32;
		}
	} 
	cout<<str<<endl;
	
	//convert into lower case
	for(int i =0; i<str.size(); i++){
		if(str[i] >= 'A' && str[i]<= 'Z'){
			str[i]=str[i]+32;
			//str[i]+=32;
		}
	} 
	cout<<str<<endl;
	
	
	
	
	
	return 0;
	
}
