#include <iostream>
using namespace std;
int main(){
    int n , fac = 1;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = n; i > 1; i--){
        fac *= i;
    }
    cout << "The Factorial of " << n << " is = " << fac; 
    
    return 0;
}