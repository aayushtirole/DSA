#include <iostream>
#include <string>  // include this for string operations
using namespace std;

int main() {
    int n;
    cin >> n;

    string binary = ""; // Binary number as string

    while (n > 0) {
        int bit = n & 1; // Extract last bit
        binary = to_string(bit) + binary; // Add bit to front (correct)
        n = n >> 1; // Right shift
    }

    cout << "The binary representation is " << binary << endl;

    return 0;
}
