#include <iostream>
using namespace std;
int main(){
    int sum = 0 , n;
    cout << "Enter a number till the sum: ";
    cin >> n;
    for(int i = 1 ; i <=n ; i++){
        sum = sum + i;
        if(i == 5){
            break;
        }
    }   
    cout << "The sum is by apply limit of 5 = " << sum;
    return 0;
}