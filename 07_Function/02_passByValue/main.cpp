#include<iostream>
using namespace std;

void dummy(int n) {
    n++;  // local copy me 1 add karte hain
    cout << "Inside dummy() -> n is " << n << endl;
}

int main() {
    int n;
    cin >> n;      // user se input lete hain

    dummy(n);      // function call (pass by value)

    cout << "Outside dummy() -> number n is " << n << endl;
    return 0;
}
