// n=5

//     1 
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
			if(j==1 || j==i || i==1 || i==n){
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
		}
		cout<<endl;
	}
	
	return 0;
}