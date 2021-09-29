#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	//CHANGE VALUE OF N WHILE EXECUTING IN C++ (give a less value like 20 , 30 etc)
	const int N=1e6+2; //10^6 
	int idx[N];
	for(int i=0;i<N; i++){
		idx[i]=-1;
	}
	
	int minidx=INT_MAX;
	
	for(int i=0;i<n;i++){
		if(idx[a[i]]!=-1){
			minidx=min(minidx, idx[a[i]]);
		}
		else{
			idx[a[i]]=i;
		}
	}
	
	if(minidx==INT_MAX){
		cout<<"-1"<<endl;
	}
	else{
		cout<<minidx+1<<endl;
	}
	
	return 0;
}