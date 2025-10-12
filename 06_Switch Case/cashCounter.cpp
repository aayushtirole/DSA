#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int n100 = 0, n50 = 0, n20 = 0, n1 = 0;

    // starting with 100 rupee notes
    switch (1) {
        case 1:
            n100 = amount / 100;
            amount = amount % 100;
            // fall through intentionally (no break)
        case 2:
            n50 = amount / 50;
            amount = amount % 50;
        case 3:
            n20 = amount / 20;
            amount = amount % 20;
        case 4:
            n1 = amount / 1;
            amount = amount % 1;
            break;
    }

    cout << "100 rupee notes: " << n100 << endl;
    cout << "50 rupee notes : " << n50 << endl;
    cout << "20 rupee notes : " << n20 << endl;
    cout << "1 rupee notes  : " << n1 << endl;

    return 0;
}
