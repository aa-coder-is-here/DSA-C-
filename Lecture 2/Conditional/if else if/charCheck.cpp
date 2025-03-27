#include <iostream>
using namespace std;
int main(){
    int n;
    char character;
    cout << "Enter a character: ";
    cin >> character;
    n = character;
    if(n >= 65 && n < 90){
        cout << "You enter a uppercase character \n";
    }else if(n >= 97 && n < 122){
        cout << "You enter a lowercase character \n";
    }

    // Second method
    // if(character >= 'a' && character < 'z'){
    //     cout << "You enter a uppercase character \n";
    // }else if(character >= 'A' && character < 'Z'){
    //     cout << "You enter a lowercase character \n";
    // }
}