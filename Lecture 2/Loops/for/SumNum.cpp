#include <iostream>
using namespace std;
int main(){
    int sum = 0 , n;
    cout << "Enter the number till the sum: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout << "The sum is: " << sum << endl; 
    
    return 0;
}