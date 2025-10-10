#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int n;
    cin >> n; 

    int ans = 0;  
    // ⚙️ 'ans' variable final binary number store karega
    // Hum binary number ko reverse order se build karenge (right se left)

    // 🔁 Jab tak n zero nahi hota, loop chalta rahega
    while(n != 0 ){

        int bit = n & 1;  
        // 💡 Yeh line n ka last bit nikalti hai.
        // Bitwise AND (&) operation use hota hai.
        // Example: agar n = 5 (binary 101)
        // toh 5 & 1 = 1  → means last bit 1 hai.

        ans = (bit) + (ans * 10);
        /*
         💭 Yeh sabse important logic line hai!

         Old approach: ans = (bit * pow(10, i)) + ans;
         New approach: ans = bit + (ans * 10);

         Yahaan hum bit ko binary number ke right side se add kar rahe hain.
         Jab hum ans * 10 karte hain, existing digits left shift ho jaate hain
         (jaise decimal system main hota hai), fir naya bit add ho jaata hai.

         🔍 Example step-by-step (n = 5):
         Binary of 5 = 101

         Step 1:
         n = 5 → binary = 101 → bit = 1
         ans = 1 + (0 * 10) = 1

         Step 2:
         n = 2 → binary = 10 → bit = 0
         ans = 0 + (1 * 10) = 10

         Step 3:
         n = 1 → binary = 1 → bit = 1
         ans = 1 + (10 * 10) = 101

         ✅ Final ans = 101
        */

        n = n >> 1; 
        // 🔄 Right shift operation: n ke bits ko ek step right shift karta hai.
        // Yeh divide by 2 ke barabar hota hai.
        // Example: 5 (101) >> 1 = 2 (10)
        // Isse last bit (jo abhi process ho chuki hai) remove ho jaata hai.
    }

    cout << "The binary representation is " << ans;
    // 📤 Finally, output print kar rahe hain.
    // Example: Input: 5 → Output: 101

    return 0;
}
