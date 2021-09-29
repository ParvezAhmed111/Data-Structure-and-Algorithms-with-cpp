#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	
	string s="23867961";
	
	//ascending order
	sort(s.begin(), s.end());
	
	//decreasing order
	sort(s.begin(), s.end(), greater<int>());
	
	cout<<s<<endl;
	
	return 0;
	
}
