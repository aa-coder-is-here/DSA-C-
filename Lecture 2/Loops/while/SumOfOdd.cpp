#include <iostream>
using namespace std;
int main(){
    int sum = 0 , n , i = 1;
    cout << "Enter the number: ";
    cin >> n;
    while(i <= n){
        if(i%2 != 0){
            sum += i;
        }
        i++;
    }
    cout << "The sum is = " << sum;
    
    return 0;
}