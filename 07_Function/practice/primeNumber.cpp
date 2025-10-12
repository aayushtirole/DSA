#include <iostream>
using namespace std;

// 🔹 Function: isPrime()
// Input: integer n
// Output: true (1) agar n prime hai, false (0) agar n prime nahi hai
// Prime number = ek aisa number jo sirf 1 aur khud se divisible ho
// Example: 2, 3, 5, 7, 11 ...

bool isPrime(int n) {

    // ✅ Special cases:
    // 0 aur 1 prime nahi hote
    if (n <= 1) {
        return 0;  // not prime
    }

    // 2 se n-1 tak check karo
    for (int i = 2; i < n; i++) {

        // agar n kisi number se divide ho jaye
        if (n % i == 0) {
            // divide hogaya → not prime
            return 0; // false
        }
    }

    // agar loop complete ho gaya aur divide nahi hua → prime
    return 1; // true
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Function call karke check kar rahe hain
    if (isPrime(n)) {
        cout << n << " is a Prime number" << endl;
    } else {
        cout << n << " is Not a Prime number" << endl;
    }

    return 0;
}
