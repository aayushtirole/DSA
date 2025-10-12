#include<iostream>
using namespace std;

// 🔹 Function: factorial()
// Ye function kisi number ka factorial calculate karta hai
// Example: 5! = 5 × 4 × 3 × 2 × 1 = 120

int factorial(int n) {

    int fact = 1;

    // 1 se n tak multiply karte jao
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;  // factorial ka result return karega
}


// 🔹 Function: nCr()
// Formula: nCr = n! / (r! × (n - r)!)
// Yahan factorial() function ka use karke numerator aur denominator nikale hain

int nCr(int n, int r) {

    // numerator = n! (n factorial)
    int numerator = factorial(n);

    // denominator = r! × (n - r)!
    int denominator = factorial(r) * factorial(n - r);

    // nCr ka final answer
    return numerator / denominator;
}


int main() {

    int n, r;

    cout << "Enter n and r: ";
    cin >> n >> r;

    // Output nCr value
    cout << "Answer is " << nCr(n, r) << endl;

    return 0;
}
