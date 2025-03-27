#include <iostream>
using namespace std;
int main(){
    int n , sum =0;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <= n ;i++){
        if(i%3 == 0){
            sum += i;
        }
    }
    cout << "The sum of divisible of 3 is = " << sum;
    
    return 0;
}