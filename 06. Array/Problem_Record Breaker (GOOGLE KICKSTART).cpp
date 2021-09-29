#include<iostream>
#include<climits>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int a[n+1]; //because we are comparing with i+1 th element also
	a[n]=-1;
	
	for(int i =0; i<n; i++){
		cout<<"Enter element no "<<(i+1)<<": ";
		cin>>a[i];
	}
	
	if(n==1){ 
		cout<<"1"<<endl;
		return 0;
	}
	
	int ans=0;
	int mx=-1;
	
	for(int i=0;i<n;i++){
		if(a[i]>mx && a[i]>a[i+1]){
			ans++;
		}
		mx=max(mx,a[i]);
	}
	cout<<ans<<endl;
	
	
	
	
	return 0;
}  
