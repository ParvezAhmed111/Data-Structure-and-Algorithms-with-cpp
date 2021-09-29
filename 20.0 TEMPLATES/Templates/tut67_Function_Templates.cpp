#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg= (a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a, float b){
//     float avg= (a+b)/2.0;
//     return avg;
// }
template <class T>
void swaap(T &a, T &b){
    T temp= a;
    a=b;
    b=temp;
}

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0;
    return avg;
}


int main(){
    float a; float b;
    // a= funcAverage(5,2);
    // printf("The average of these numbers is %.3f", a);
    // b= funcAverage2(5,2.4);
    // printf("The average of these numbers is %.3f", b);
    a= funcAverage(5,2);
    printf("The average of these numbers is %.3f \n", a);

    int x=5, y=7;
    cout<<x<<" "<<y<<endl;
    swaap(x,y);
    cout<<x<<" "<<y<<endl;
    

    return 0;
}