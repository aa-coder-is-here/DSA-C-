#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num%2 == 0)
       cout << "The Number is Even";
    else 
       cout << "The Number is Odd";

    return 0;
}