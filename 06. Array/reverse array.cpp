#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int start;
    int end;
    
    for (int i=0; i<(n/2); i++){
        start=arr[i];
        end=arr[n-1-i];
        
        swap(start, end);
        arr[i]=start;
        arr[n-1-i]=end;
    }
    
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
