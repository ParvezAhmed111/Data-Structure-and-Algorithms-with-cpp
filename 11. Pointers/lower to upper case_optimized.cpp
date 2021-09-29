#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	
	string s="ashgsuydfdsayu";
	
	//convert into upper case
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout<<s<<endl;
	
	//convert into lower case
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout<<s<<endl;
	
	return 0;
	
}
