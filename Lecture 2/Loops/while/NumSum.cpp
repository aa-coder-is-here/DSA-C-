#include <iostream>
using namespace std;
int main(){
    int sum = 0 , n , i = 1;
    cout << "Enter a number till the sum: ";
    cin >> n;
    while(i <= n){
        sum = sum + i;
        i++;
    }    
    cout << "The sum is: " << sum << endl;
    return 0;
}
