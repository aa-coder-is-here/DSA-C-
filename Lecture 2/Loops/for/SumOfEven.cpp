#include <iostream>
using namespace std;
int main(){
    int sum = 0 , n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        if(i%2 == 0)
          sum += i;
    }
    cout << "The sum of even number is = " << sum;
    
    return 0;
}