#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+3, M=1e9+7;

class Complex{
    private:
        int real, imag;
    public:
        Complex(int r=0, int i=0){
            real=r;
            imag=i;
        }

        Complex operator +(Complex const &obj){
            Complex res;
            res.real= real + obj.real;
            res.imag= imag +obj.imag;
            return res;
        }

        void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};

int32_t main(){
    Complex c1(10, 12), c2(3,5);
    Complex c3= c1+c2;
    c3.display();
    
    
    return 0;
}



