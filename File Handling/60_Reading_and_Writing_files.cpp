#include<iostream>
#include<fstream>

// Ths useful classes for working with files in C++ are
// 1. fstreambase
// 2. ifstream --> derieved from fstreambase
// 2. ofstream --> derieved from fstreambase

/*
In order to work with files in C++, you woill have to open it.
Primarily there are two ways to open a file:
1. using the __cpp_delegating_constructors
2. using the member function open() of the class
*/
using namespace std;

int main(){
    string st="Harry Bhai kya baat h";
    string st2;
    //Opening files with constructor and writing it
    ofstream out("sample60.txt"); //write operation
    out<<st;

    //Opening files with constructor and reading it
    ifstream in("sample60b.txt"); //Read operation
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    

    return 0;
}