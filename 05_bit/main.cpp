#include <iostream>
#include <string>  // string use karne ke liye header file
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;  // 👈 user se number input lete hain

    // 🧩 'binary' ek string hai jisme hum binary number store karenge
    // Hum number ke bits ko ek ek karke nikalenge aur string me store karte jayenge
    string binary = "";  

    // ⚙️ Jab tak n > 0 hai tab tak loop chalega
    while (n > 0) {

        // 🔹 Step 1: n ka last bit (Least Significant Bit) nikalte hain
        int bit = n & 1;  
        // 👉 '&' ek bitwise AND operator hai
        // ye 1 ke sath compare karke last bit batata hai (0 ya 1)
        // Example: 5 (101) & 1 = 1  → last bit = 1

        // 🔹 Step 2: bit ko string me convert karte hain aur binary ke aage add karte hain
        binary = to_string(bit) + binary;  
        /*
        🧠 Is line ka matlab bahut important hai 👇

        ➤ to_string(bit):
            bit (jo 0 ya 1 integer hai) ko string me badal deta hai 
            Example: agar bit = 1 → "1", agar bit = 0 → "0"

        ➤ + binary:
            Hum naye bit ko purani string ke *aage* jod rahe hain (prepend kar rahe hain)
            kyunki hum bits ko right se left nikal rahe hain
            (LSB se MSB tak), par print hamesha left se right karna hota hai.

        ➤ Example step-by-step (n = 5)
            n = 5 (binary 101)
            
            Step 1: n=5 → bit=1 → binary="1"
            Step 2: n=2 → bit=0 → binary="0" + "1" = "01"
            Step 3: n=1 → bit=1 → binary="1" + "01" = "101"
            ✅ Final output = "101"
        */

        // 🔹 Step 3: n ko right shift karte hain (ek bit hata dete hain)
        n = n >> 1;
        // Example: 5 (101) >> 1 = 2 (10)
        // Matlab humne last bit (jo process ho chuka) hata diya
    }

    // 🔹 Step 4: Final binary string print karte hain
    cout << "The binary representation is " << binary << endl;

    return 0;
}
