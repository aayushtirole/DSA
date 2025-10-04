//hollow  right 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of triangle: ";
    cin >> n;   // Example input: n = 5

    int i = 0;  // i represents the current row (starting from 0)

    // ---- Outer Loop (Rows) ----
    while (i < n) {   // Loop will run from row 0 to n-1

        int j = 0;    // j represents the current column (starting from 0)

        // ---- Inner Loop (Columns) ----
        while (j <= i) {   // Har row me columns ki count (i+1) hoti hai

            /*
               Border conditions for hollow triangle:
               1. First column of any row (j == 0)
               2. Last column of current row (j == i)
               3. Last row (i == n-1)

               Agar koi cell above condition me aata hai to STAR (*) print hoga,
               warna andar ke cells ke liye SPACE (" ") print hoga.
            */
            if (j == 0 || j == i || i == n - 1) {
                cout << "*";   // Border par star
            } else {
                cout << " ";   // Beech mein khali jagah
            }

            j++; // Move to next column
        }

        cout << endl; // Ek row complete hone ke baad next line
        i++;          // Next row par move karna
    }

    return 0;
}