#include<bits/stdc++.h>
using namespace std;

int count(vector<int> arr){
    int maxLen = 0;
    int tempLen = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == 0) {
            tempLen++;
        } else {
            tempLen = 0;
        }

        if (tempLen > maxLen) {
            maxLen= tempLen;
        }
    }

    if(maxLen) return maxLen;
    else return -1;
}

int main(){
    int num; cin>>num;
    int base; cin>>base;

	int ans=0;
	int x=1;
	while(x<=num){
		x=x*base;
	}
	x=x/base;
	
	while(x>0){
		int last_digit=num/x;
		num=num-last_digit*x;
		x=x/base;
		ans=ans*10+last_digit;
	}
	
    vector<int> arr;
    while (ans>0){
        int ld=ans%10;
        arr.push_back(ld);
        ans/=10;
    }

    cout<<count(arr);

    return 0;
}