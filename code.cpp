#include <iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter Marks : ";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade A+";
    
    }
    else if (marks>=80 && marks>=70 )
    {
        cout<<"Grade A";
    }
    else if (marks>=60){
        cout<<"Grade C";
    }
    else{
        cout<<"Sorry apply next year";
    }
    


    }
    

// Boilerplate Code
//g++ -o code code.cpp && code