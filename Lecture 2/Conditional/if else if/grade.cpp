#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your Marks: ";
    cin >>  marks;
    if(marks >= 90){
        cout << "Your Grade is A \n";
    }else if(marks >= 80){
        cout << "Your Grade is B \n";
    }else if(marks < 80){
        cout << "Your Grade is C \n";
    }
}