#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number for pattern: ";
    cin >> n;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n; j++){
            cout << j << "  ";
        }
        cout << endl;
    }
    
    return 0;
}

// Outer Loop tell us how many lines are requited
// Inner loop tell us which thing gonna be print