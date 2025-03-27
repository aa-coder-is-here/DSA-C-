#include <iostream>
using namespace std;
int main(){
    int sum = 0 , n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1 ; i<= n;i+=2){
        if(i%2 != 0)
          sum += i;
    }
    cout << "The sum of odd numbers are: " << sum;
    
    return 0;
}
