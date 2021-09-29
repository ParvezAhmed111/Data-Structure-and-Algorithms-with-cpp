#include<iostream>
using namespace std;

class student{
    string name;
    public: //because by default they are private i.e. they cant be accessed outside this class
    
    int age;
    bool gender;

    //default constructor- takes no parameter
    student(){
        cout<<"Default constructor"<<endl;
    }

    //parameterised constructor- takes parameter
    student(string s, int a, bool g){
        cout<<"Parameterised constructor"<<endl;
        name= s;
        age= a;
        gender= g;
    }

    //copy constructor
    student (student &a){
        cout<<"Copy constructor"<<endl;
        name= a.name;
        age= a.age;
        gender= a.gender;
    }

    //destructor- it will be called 3 times in the output because in this case we have made 3 objects
    ~student(){
        cout<<"Destructors called"<<endl;
    }
    void setName(string s){
        name =s;
    }

    void getName(){
        cout<<name<<endl;
    }    

    void printInfo(){
        cout<<"Name= ";
        cout<<name<<endl;
        cout<<"Age= ";
        cout<<age<<endl;
        cout<<"Gender= ";
        cout<<gender<<endl;
    }

    // //operator overloading
    // bool operator == (student &a){
    //     if (name==a.name && age==a.age && gender=a.gender){
    //         return true;
    //     }
    //     return false;
    // }
};

int main(){

    student a("Parvez", 20, 0);
    // a.printInfo();
    student b("Rahul", 21, 0);
    student c=a; //student c(a);

    // if(c==a){
    //     cout<<"Same"<<endl;
    // }
    // else{
    //     cout<<"Not Same"<<endl;
    // }

    return 0;
}