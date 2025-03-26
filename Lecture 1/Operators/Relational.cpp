#include <iostream>
using namespace std;
int main(){
    int a , b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;

    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a <= b = " << (a <= b) << endl;

    // True = 1 , False = 0
    return 0;
}