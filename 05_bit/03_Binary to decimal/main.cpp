// Program: Binary to Decimal Conversion
#include<iostream>
#include<math.h>  // pow() function ke liye
using namespace std;

int main(){
    
    int n;
    cout << "Enter a binary number: ";
    cin >> n;  // User se binary number input lena (e.g. 1011)

    int i = 0;     // i bit position batata hai (rightmost bit = position 0)
    int ans = 0;   // ans me hum final decimal value store karenge

    // Jab tak binary number khatam nahi hota (n != 0)
    while(n != 0){

        int digit = n % 10;  
        // Binary number ka last digit nikal rahe hain
        // e.g. n = 1011 → digit = 1
        // n = 101 → digit = 1
        // Ye har iteration me ek ek digit nikalta hai right se

        if(digit == 1){
            ans = ans + pow(2, i);
            // Agar digit 1 hai to uski decimal value add karo
            // position 0 → 2^0 = 1
            // position 1 → 2^1 = 2
            // position 2 → 2^2 = 4, etc.
            //
            // Example: binary 1011 → (1×2³) + (0×2²) + (1×2¹) + (1×2⁰)
            // = 8 + 0 + 2 + 1 = 11
        }

        n = n / 10; // Last digit remove karna (e.g. 1011 → 101)
        i++;        // Next bit ke liye position badhana
    }

    cout << "Decimal value: " << ans << endl; // Final output print karna

    return 0;
}
