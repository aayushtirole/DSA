#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, nextTerm;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        cout << a << " ";  // print current term
        nextTerm = a + b;  // calculate next term
        a = b;             // update a
        b = nextTerm;      // update b
    }

    return 0;
}
