#include<iostream>
using namespace std;

int largestPowOf2(int n){
    int x=0;
    while((1<<x)<=n){
        x++;
    }
    return x-1;
}
int solve(int n){
    if(n==0){   //base case
        return 0;
    }
    int x = largestPowOf2(n);
    int b_till_2x = x * (1<<(x-1));  //bits upto 2^x
    int msb_2x_to_n = n - (1<<x) + 1; //highest bits/most significant bits (rightmost ones) from 2^x to n 
    int rest= n-(1<<x);
    int ans= b_till_2x + msb_2x_to_n + solve(rest);
    return ans;
}
int main(){
	
	cout<<solve(18)<<endl;

	return 0;
}

