// exit() ek built-in function hai jo <cstdlib> (ya <stdlib.h>) header me hota hai.
// Ye program execution ko immediately stop kar deta hai — bina kisi loop ya switch se normally return kiye.

// Example:
#include <iostream>
#include <cstdlib>  // for exit()

using namespace std;

int main() {
    while (true) {
        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Option 1 selected\n";
                break;

            case 2:
                cout << "Program exiting...\n";
                exit(0);  // 💥 instantly poora program band kar dega

            default:
                cout << "Invalid choice\n";
        }
    }

    cout << "Yeh line kabhi execute nahi hogi!\n";
}

// 🧠 Notes:

// exit(0) → normally terminate karta hai (successful exit).

// exit(1) ya exit(EXIT_FAILURE) → abnormal termination show karta hai (error).

// Ye sab functions, loops, aur switch cases ko bypass kar deta hai.