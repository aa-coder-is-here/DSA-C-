#include <iostream>
using namespace std;
int main(){
    int num = 1, n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1 ;j++){
            cout << num; // also can do (i+1)
        }
        num++;
        cout << endl;
    }
    
    return 0;
}