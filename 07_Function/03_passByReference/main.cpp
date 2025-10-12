#include<iostream>
using namespace std;

// 🔹 Function: dummy()
// Pass by reference me hum & use karte hain
// &n ka matlab hai ki function ke andar ka n **original variable ka reference** hai
void dummy(int &n) {
    n++;  // original n ko 1 se increment karega
    cout << "Inside dummy() -> n is " << n << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;      // user input

    dummy(n);      // function call (pass by reference)

    cout << "Outside dummy() -> number n is " << n << endl;

    return 0;
}
