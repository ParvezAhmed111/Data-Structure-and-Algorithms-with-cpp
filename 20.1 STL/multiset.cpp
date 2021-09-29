#include<iostream>
#include<set>
using namespace std;

int main(){

    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(5);

    //printing output
    for(auto i: s) cout<<i<<" ";
    cout<<endl;
    
    for(auto i=s.begin(); i != s.end(); i++){
        cout<< *i <<" ";
    }
    cout<<endl;
    
    //printing reverse
    cout<<"Reverse "<<endl;
    for(auto i=s.rbegin(); i != s.rend(); i++){
        cout<< *i <<" ";
    }
    cout<<endl;

    //size
    cout<<"SIZE: "<<s.size()<<endl;

    //CUSTOM comparator
    // set<int, greater<int>> s1;
    // s1.insert(1);
    // s1.insert(2);
    // s1.insert(2);
    // s1.insert(4);
    // s1.insert(5);
    // for(auto i: s1) cout<<i<<" ";
    // cout<<endl;

    //UPPER Bound and LOWER Bound
    cout<<"UPPER Bound and LOWER Bound"<<endl;
    cout<<*s.lower_bound(2)<<endl;
    cout<<*s.lower_bound(3)<<endl;
    cout<<*s.lower_bound(4)<<endl;
    cout<<*s.upper_bound(3)<<endl;
    cout<<*s.upper_bound(4)<<endl;
    cout<<(s.upper_bound(5) == s.end())<<endl;

    //erase
    cout<<"Before erasing: "<<endl;
    for(auto i: s) cout<<i<<" ";
    cout<<endl;
    cout<<"After erasing: "<<endl;
    s.erase(2); //it will delete all occurences of 2
    s.erase(s.find(4)); //it will delete only one occurence of 4
    s.erase(s.begin()); 
    for(auto i: s) cout<<i<<" ";
    cout<<endl;


    

    return 0;
}