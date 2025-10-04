//hallow square 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square: ";
    cin >> n;   // Example input: n = 5

    int i = 0;  // i represents the current row (starting from 0)

    // ---- Outer Loop (Rows) ----
    while (i < n) {   // Loop will run for rows 0 to n-1 (total n rows)

        int j = 0;    // j represents the current column (starting from 0)

        // ---- Inner Loop (Columns) ----
        while (j < n) {   // Loop will run for columns 0 to n-1 in each row

            /*
               Border conditions for square:
               1. First row (i == 0)
               2. Last row (i == n-1)
               3. First column (j == 0)
               4. Last column (j == n-1)

               Agar koi cell above condition me aata hai to STAR (*) print hoga,
               warna andar ke cells ke liye SPACE (" ") print hoga.
            */
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
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