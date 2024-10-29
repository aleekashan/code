#include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter Age :";
    cin>>age;
    if(age >= 18){
        cout<<"Congratulations you are eligible for for Driving license"<<endl;
    }
    else{
        cout<<"Sorry you are underage"<<endl;
    }
    
}
// Boilerplate Code
//g++ -o code code.cpp && code