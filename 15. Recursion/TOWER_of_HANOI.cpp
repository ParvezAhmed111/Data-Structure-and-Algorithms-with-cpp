#include<iostream>
using namespace std;

void TOH(int n, char source, char destination, char helper){
    
    //base case
    if (n==0){
        return;
	}
    TOH(n-1, source, helper, destination);
    cout<<"Move disc "<<n<<" from "<<source<<" to "<<destination<<endl;

    TOH(n-1, helper, destination, source);
}

int main(){
    
    TOH(4, 'A','B','C');


    return 0;
}
