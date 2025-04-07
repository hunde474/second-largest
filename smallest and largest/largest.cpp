#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

void findSecondAndThirdLargest(int arr[], int size) {
    if (size < 3) {
        cout << "Array must contain at least three elements." << endl;
        return;
    }

    // Initialize the three largest elements to minimum possible value
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    
    // Traverse the array to find the first, second, and third largest elements
    for (int i = 0; i < size; i++) {
        // If current element is greater than the largest, update first, second, and third
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        // If current element is greater than second but less than first, update second and third
        else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        // If current element is greater than third but less than second and first
        else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    // Output the results
    cout << "First largest: " << first << endl;
    cout << "Second largest: " << second << endl;
    cout << "Third largest: " << third << endl;
}

int main() {
    int arr[] = {120, 45, 67, 89, 34, 23, 90, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondAndThirdLargest(arr, size);
    
    return 0;