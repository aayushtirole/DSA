#include <iostream>
#include <string>
#include <cmath> // pow() function ke liye
using namespace std;

int main() {

    string binary;
    cout << "Enter an 8-bit binary number: ";
    cin >> binary;  
    // User se 8-bit binary string input le rahe hain (e.g. 00001010 or 11111011)

    int decimal = 0;  // Final decimal result store karega

    // Step 1: Check karte hain number positive hai ya negative
    // Binary ka sabse leftmost bit (MSB) sign bit hota hai:
    // 0 → positive, 1 → negative
    if (binary[0] == '0') {
        // ------------------- POSITIVE NUMBER CASE -------------------

        // Rightmost se leftmost tak har bit ke liye loop chala rahe hain
        // i → string index, power → bit position (2^power)
        for (int i = binary.length() - 1, power = 0; i >= 0; i--, power++) {

            if (binary[i] == '1') {
                decimal += pow(2, power);
                // Agar bit 1 hai to uski value add karte hain (2^position)
                // Example: 00001010 → (1×2^3) + (1×2^1) = 8 + 2 = 10
            }
        }

        cout << "Decimal value: " << decimal << endl;
    } 
    else {
        // ------------------- NEGATIVE NUMBER CASE -------------------

        // Step 2: Two’s complement system ka reverse process karenge
        // Ab hum original number ka positive equivalent nikalenge

        // Step 2.1: 1’s complement lena (sab bits flip kar dena)
        for (int i = 0; i < binary.length(); i++) {
            binary[i] = (binary[i] == '0') ? '1' : '0';
            // Agar bit 0 hai to usko 1 me badal do
            // Agar bit 1 hai to usko 0 me badal do
        }

        // Step 2.2: Ab 2’s complement lena (1 add karna)
        int carry = 1; // Starting me +1 add karna hai
        for (int i = binary.length() - 1; i >= 0; i--) {

            // Agar bit 1 hai aur carry bhi 1 hai -> dono add karne pe 0 aayega aur carry 1 rahega
            if (binary[i] == '1' && carry == 1) {
                binary[i] = '0';
            }
            // Agar bit 0 hai aur carry 1 hai -> 0+1=1, carry 0 ho jaata hai
            else if (binary[i] == '0' && carry == 1) {
                binary[i] = '1';
                carry = 0;
            }
            // Agar carry 0 ho gaya, to aage ke bits ko change nahi karte
        }

        // Step 2.3: Ab jo binary bacha hai, wo positive value ka binary hai
        // Isko normal way me decimal me convert kar do
        for (int i = binary.length() - 1, power = 0; i >= 0; i--, power++) {
            if (binary[i] == '1') {
                decimal += pow(2, power);
            }
        }

        // Step 2.4: Ab answer negative hoga, to minus sign lagao
        cout << "Decimal value: -" << decimal << endl;
    }

    return 0;
}
