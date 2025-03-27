#include <iostream>
using namespace std;
int main(){
    int num;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 2; i < num ; i++){
       if(num%i == 0){
          isPrime = false;
          break;
       }
    }
    cout << (isPrime == true ? "The Number is Prime" : "The Number is not Prime");

    return 0;
}