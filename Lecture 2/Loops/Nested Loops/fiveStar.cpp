#include <iostream>
using namespace std;
int main(){
    int col = 5, row = 5;
    for(int i = 1 ; i <= col ; i++){
        for(int j = 1; j <= row ; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    
    return 0;
}