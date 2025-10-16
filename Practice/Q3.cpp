#include <iostream>
#include <climits>  // 👈 Needed for INT_MIN
using namespace std;

// Function to find the second largest number in an array
int secondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return -1;
    }

    int first = INT_MIN;   // Largest number
    int second = INT_MIN;  // Second largest number

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest element (all elements are same)." << endl;
        return -1;
    }

    return second;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = secondLargest(arr, n);
    if (result != -1)
        cout << "Second largest number is: " << result << endl;

    return 0;
}
