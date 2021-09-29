#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
  
    sort(v.begin(), v.end()); 
    cout << "Ascending order \n"; 
    for (auto x : v) 
        cout << x << " "; 

    sort(v.begin(), v.end(), greater<int>()); 
    cout << "\n Descending order \n"; 
        for (auto x : v) 
            cout << x << " "; 
  
    return 0; 
}