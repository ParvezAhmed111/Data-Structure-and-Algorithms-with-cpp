#include<iostream>
using namespace std;

class student{
    string name;
    public: //because by default they are private i.e. they cant be accessed outside this class
    
    int age;
    bool gender;

    //to access private data outside function we use setter and getter function
    //setter function
    void setName(string s){
        name =s;
    }

    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name= "<<name<<endl;
        cout<<"Age= "<<age<<endl;
        cout<<"Gender= "<<gender<<endl;
    }
};

int main(){

    student arr[3];
    for (int i=0; i<3; i++){

        string s;
        cout<<"Name= ";
        cin>>s;
        arr[i].setName(s);

        cout<<"Age= ";
        cin>>arr[i].age;

        cout<<"Gender= ";
        cin>>arr[i].gender;
    }

    for(int i=0; i<3; i++){
        arr[i].printInfo();
    }

    return 0;
}