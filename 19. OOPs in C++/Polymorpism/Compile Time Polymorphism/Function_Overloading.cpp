#include<bits/stdc++.h>
using namespace std;

class New{
    public:
    void func(){
        cout<<"No arguments"<<endl;
    }
    void func(int x){
        cout<<"Integer argument"<<endl;
    }
    void func(double x){
        cout<<"Double argument"<<endl;
    }
};

int main(){
    New obj;
    obj.func();
    obj.func(1);
    obj.func(1.1);
    
    
    return 0;
}