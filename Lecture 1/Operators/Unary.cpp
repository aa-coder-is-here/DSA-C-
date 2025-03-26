#include <iostream>
using namespace std;
int main(){
    int a = 10;

    // Post: a++ => kam pehly then update , Pre:  ++a pehly update fir kam
    int b = a++; // => kaam b = 10 , update a = 10;
    int c = ++a;

    cout << a << " " << b << " " << c << endl;

    b = a--;
    c = --a;

    cout << a << " " << b << " " << c;
}