#include <iostream> 
using namespace std;
int main(){
    int a , b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // For accurate dividing in C++
    //There is two types of division in C++
    // 1. Explicit Type Casting

    cout << (5 / (double)2) << endl;

    // 2. Using Varible one int and other float coz when we divide int by int then ans is also in the int, So we have to change the data type of one variable.

    int c = 5;
    float d = 2;
    cout << (c / d) << endl;

    // What if we use an ans var
    int ans = (c / d);
    cout << ans << endl;
    // The expilicit works but the other side is not working, So we have to use the explicit type casting.
    return 0;
}