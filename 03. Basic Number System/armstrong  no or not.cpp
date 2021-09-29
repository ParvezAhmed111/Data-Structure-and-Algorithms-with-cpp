/* 
Armstrong number is a number that is equal to the sum of cubes of its digits.
Eg: 153 = 1^3 + 5^3 + 3^3
		= 1 + 125 + 27
		= 153
Other examples: 0, 1, 153, 370, 371, 407
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int sum=0;
	int original_n=n;
	while(n>0){
		int last_digit=n%10;
		sum=sum+pow(last_digit,3);
		n=n/10;
	}
	
	if(sum==original_n){
		cout<<"Armstrong No"<<endl;
	}
	else{
		cout<<"Not Armstrong No"<<endl;
	}
	return 0;
}
