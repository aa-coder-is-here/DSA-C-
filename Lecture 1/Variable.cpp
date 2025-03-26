#include <iostream>
using namespace std;
int main(){
    // Integer Variable take 4 bytes of memory
    int age = 25;
    cout << age << endl;
    cout << sizeof(age) << endl;

    // Float Variable take 4 bytes of memory
    float weight = 65.5f;
    cout << weight << endl;
    cout << sizeof(weight) << endl;

    // Char Variable take 1 bytes of memory
    char grade = 'A';
    cout << grade << endl;
    cout << sizeof(grade) << endl;

    // Bool Variable take 1 bytes of memory
    bool isCoder = false;
    cout << isCoder << endl;
    cout << sizeof(isCoder) << endl;

    // Double Variable take 8 bytes of memory
    double PI = 3.14159265359;
    cout << PI << endl;
    cout << sizeof(PI) << endl;

    return 0;
}