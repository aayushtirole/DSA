#include<iostream>
using namespace std;

// 🔹 Function: isEven()
// Yeh function check karta hai ki diya gaya number even hai ya odd.
// Agar number EVEN hai -> return 1
// Agar number ODD hai  -> return 0

bool isEven(int a) {

    // ✅ 'a & 1' ka matlab:
    // '&' => Bitwise AND operator
    // Binary me agar kisi number ka last bit 1 hai -> number ODD hota hai
    // Binary me agar last bit 0 hai -> number EVEN hota hai

    // Example:
    // 5 in binary = 0101  -> last bit = 1  -> odd
    // 6 in binary = 0110  -> last bit = 0  -> even

    // (a & 1) kya karta hai?
    // Yeh last bit check karta hai.
    // Agar last bit 1 hui, to result 1 (true)
    // Agar last bit 0 hui, to result 0 (false)

    if(a & 1) {
        // agar result 1 aaya -> number odd hai
        return 0;  // 0 ka matlab false (odd number)
    }
    else {
        // agar result 0 aaya -> number even hai
        return 1;  // 1 ka matlab true (even number)
    }
}


int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // yahan hum function call kar rahe hain:
    // agar isEven(num) true (1) return karega -> number even hai
    // agar isEven(num) false (0) return karega -> number odd hai
    if(isEven(num)) {
        cout << "Number is Even" << endl;
    }
    else {
        cout << "Number is Odd" << endl;
    }

    return 0;
}
