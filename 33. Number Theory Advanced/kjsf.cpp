#include<iostream>
using namespace std; 

int getBit(int n , int pos)
{
        // return ((n &(1<<pos))!=0);
    return ( (n &(1<<pos) )!=0 );
}

int main()
{
    int n,pos; 
    // cout<<"Enter the no :"<<endl;
    cin>>n;
    // cout<<"Enter the position of which you want to get bit"<<endl; 
    cin>>pos; 
    cout<<getBit(n , pos);

}