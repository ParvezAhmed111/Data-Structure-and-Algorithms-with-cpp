#include<iostream>
using namespace std;

class student{

    public: //because by default they are private i.e. they cant be accessed outside this class
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"Name= "<<name<<endl;
        cout<<"Age= "<<age<<endl;
        cout<<"Gender= "<<gender<<endl;
    }
};

int main(){

    // student a;
    // a.name = 'Parvez';
    // a.age = 22;
    // a.gender= 0; //0 for male, 1 for female

    student arr[3];
    for (int i=0; i<3; i++){
        cout<<"Name= ";
        cin>>arr[i].name;
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