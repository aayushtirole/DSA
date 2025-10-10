#include <iostream>
#include <string> // string operations ke liye header file include kar rahe hain
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // User se input lena (ye positive ya negative dono ho sakta hai)

    // ------------------------- POSITIVE NUMBER CASE -------------------------
    if (n >= 0) {
        string binary = ""; // Binary digits ko string me store karne ke liye variable

        // Jab tak n 0 nahi ho jata, hum har step me ek bit nikalte hain
        while (n > 0) {
            int bit = n % 2;  // Last bit nikalna (agar n even hai → 0, odd hai → 1)
            
            // Example: agar n = 13
            // 13 % 2 = 1 → binary = "1"
            // 6 % 2 = 0  → binary = "01"
            // 3 % 2 = 1  → binary = "101"
            // 1 % 2 = 1  → binary = "1101"

            binary = to_string(bit) + binary; 
            // Yeh line bit ko string ke start me jodti hai.
            // to_string(bit) → integer ko string me convert karta hai.
            // binary = "1" + "01" => "101"
            
            n = n / 2; // Har baar number ko 2 se divide karte hain taaki agla bit mile
        }

        // Agar user ne 0 input kiya to binary string empty ho jaayegi, 
        // isliye condition lagayi hai taaki "0" print ho.
        cout << "Binary: " << (binary == "" ? "0" : binary);
    }

    // ------------------------- NEGATIVE NUMBER CASE -------------------------
    else {
        int num = -n; // Negative number ka absolute (positive) part lete hain
                      // Example: agar n = -5 → num = 5

        string binary = "";

        // Step 1: Positive number ka binary nikalna
        while (num > 0) {
            int bit = num % 2;              // Remainder nikala (0 ya 1)
            binary = to_string(bit) + binary; // Bit ko binary string ke start me add kiya
            num = num / 2;                  // Next bit ke liye divide by 2
        }

        // Step 2: Padding (8-bit binary banane ke liye)
        // Agar binary chhoti hai (e.g. "101" → 3 bits), to uske aage 0 lagake 8-bit bana dete hain.
        // Example: 5 → 00000101
        while (binary.length() < 8) {
            binary = "0" + binary;
        }

        // Step 3: 1’s complement lena (0 ko 1 aur 1 ko 0 me badalna)
        // Yeh step bits ko flip karta hai
        // Example: 00000101 → 11111010
        for (int i = 0; i < binary.length(); i++) {
            binary[i] = (binary[i] == '0') ? '1' : '0'; // Ternary operator: agar 0 hai to 1, agar 1 hai to 0
        }

        // Step 4: 2’s complement (1’s complement ke baad +1 add karte hain)
        // Yeh step actually negative number ko represent karta hai binary me.
        int carry = 1; // Shuru me +1 add karna hai, isliye carry = 1

        // Hum pichhe se (rightmost bit se) addition start karte hain
        for (int i = binary.length() - 1; i >= 0; i--) {

            // Agar current bit 1 hai aur carry bhi 1 hai -> dono add karne pe 0 aayega aur carry 1 rahega
            if (binary[i] == '1' && carry == 1) {
                binary[i] = '0';
            }
            // Agar current bit 0 hai aur carry 1 hai -> 0 + 1 = 1 (aur carry khatam)
            else if (binary[i] == '0' && carry == 1) {
                binary[i] = '1';
                carry = 0;
            }
            // Agar carry 0 ho gaya to loop aage bits ko change nahi karega (kyunki kuch add nahi karna hai)
        }

        // Step 5: Final result print karna
        cout << "Binary Negative (Two's Complement) : " << binary;
        // Example:
        // Input: -5
        // +5 → 00000101
        // 1's complement → 11111010
        // +1 → 11111011
        // Output: Binary (Two's Complement): 11111011
    }

    return 0;
}
