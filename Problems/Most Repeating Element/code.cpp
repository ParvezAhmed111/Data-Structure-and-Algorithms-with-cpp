#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int solution(vector<int> arr)
{
    int n=arr.size();
    sort(arr.begin(), arr.end());
 
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
 
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
}

int main(){
    vector<int> arr{4,4,1,4,13, 8,8,8,0,8,14,9,15,11,-1,10,15,22,22,22,22,22,21};

    cout<<solution(arr);

    
    return 0;
}