#include<iostream>
using namespace std;

//Reverse the bits of an 32 bit unsigned integer A.
//     3------ 00000000000000000000000000000011    
// 3221225472- 11000000000000000000000000000000

// unsigned int reverseUnsigned_32_Bit(unsigned int n){
//     int res=0;
//     for(int i=0; i<32; i++){
//         int lsb= n&1;
//         int revLsb=lsb<<(31-i);
//         res=res|revLsb;
//         n=n>>1;
//     }
//     return res;
// }
unsigned int reverseUnsigned_32_Bit(unsigned int n){
    unsigned int res=0;
    for(int i=0; i<32; i++){
        // res=res<<1;
        // res|=n&1;
        // n=n>>1;

        int lsb=n&1;
        n=n>>1;

        res=res<<1;
        res=res|lsb;

    }
    return res;
}

//Reverse bits
// 11010
// 01011


// bool getBit(int n, int pos){
//     return((n&(1<<pos))!=0);
// }

// int revreseBit(int n){
//     int res=0;
//     for(int i=0; i<32; i++){
//         if(getBit(n, i)){
//             res= res|(1<<i);
//         }
//     }
//     int res;
// }



int main(){
    cout<<reverseUnsigned_32_Bit(3)<<endl;

	return 0;
}

