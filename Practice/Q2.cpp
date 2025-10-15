// Prime Factorization

#include <iostream>
using namespace std;

void primeFactors(int n) {
    for (int i = 2; i * i <= n; i++) { // check up to sqrt(n)
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) { // if n is a prime number > 1
        cout << n;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime factors: ";
    primeFactors(num);
    cout << endl;
    return 0;
}
