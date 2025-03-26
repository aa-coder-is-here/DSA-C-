#include<iostream>
using namespace std;
int main(){
    char grade = 'A';
    int valueOfGrade = grade;
    cout << valueOfGrade << endl;
    
    double price = 100.99;
    int newPrice = (int)price;
    cout << price << endl;
    cout << newPrice << endl;
    // In c++ it dose not round off the value it just remove the decimal part.
    return 0;
}