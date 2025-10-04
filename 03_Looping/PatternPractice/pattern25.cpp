#include<iostream> 
using namespace std;  

int main(){     
    int n;     
    cin >> n;   // Input the size of the pattern (number of rows)
    
    int i = 1;  // Row counter (outer loop)

    // Loop through each row
    while(i <= n){         

        // --------------------- PART 1 ----------------------
        // Print the first triangle of numbers: 1 to (n - i + 1)
        // Example: if n=5 and i=1, it prints 1 2 3 4 5
        int j = 1;          
        while(j <= n - i + 1){    
            cout << j << " ";   // Print number
            j++;                // Move to next number
        }

        // --------------------- PART 2 ----------------------
        // Print stars (*) in the middle
        // Rule: number of stars = (i - 1) * 2
        // Example: 
        // row 1 -> (1-1)*2 = 0 stars
        // row 2 -> (2-1)*2 = 2 stars
        // row 3 -> (3-1)*2 = 4 stars, etc.
        j = 1;         
        while(j <= (i - 1) * 2){ 
            cout << "* ";       // Print star
            j++;                // Next star
        }

        // --------------------- PART 3 ----------------------
        // Print the second triangle of numbers in reverse order
        // From (n - i + 1) down to 1
        // Example: if n=5 and i=1 → 5 4 3 2 1
        j = n - i + 1;        
        while(j >= 1){         
            cout << j << " ";   // Print number
            j--;                // Decrement for reverse
        }

        // Move to the next row after completing one line
        i++;                  
        cout << endl;         
    }

    return 0; 
}
