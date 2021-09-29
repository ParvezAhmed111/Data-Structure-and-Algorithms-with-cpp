#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string in1;
    string in2;

    getline(cin, in1 );
    getline(cin, in2 );

    istringstream is1( in1 );
    istringstream is2( in2 );

    vector <int> list1( ( istream_iterator<int>( is1 ) ), istream_iterator<int>() );
    vector <int> list2( ( istream_iterator<int>( is2 ) ), istream_iterator<int>() );

    vector<pair<int, int>> values;
    int sum1=0, sum2=0;
    for(auto &i: list1) sum1+=i;
    for(auto &i: list2) sum2+=i;
    // cout<<sum1<<" "<<sum2;

    vector<int> res_even;
    vector<int> res_odd;
    int newsum1, newsum2, val1, val2;
    for (int i = 0; i < list1.size(); i++) {
        for (int j = 0; j < list2.size(); j++) {
            newsum1 = sum1 - list1[i] + list2[j];
            newsum2 = sum2 - list2[j] + list1[i];
            if (newsum1 == newsum2) {
                val1 = list1[i];
                val2 = list2[j];
                int pro= val1*val2;
                if(pro%2==0){
                    res_even.push_back(val1);
                    res_even.push_back(val2);
                }
                else{
                    res_odd.push_back(val1);
                    res_odd.push_back(val2);
                }
            }
        }
    }

    for(auto &i: res_even) cout<<i<<" ";
    for(auto &i: res_odd) cout<<i<<" ";


    

    return 0;
}