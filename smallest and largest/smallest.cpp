#include <iostream>
using namespace std;

int findsmallest(int arr[], int size) {
    int minNumber = arr[0]; // Assume the first element is the smallest

    for (int i = 1; i < size; i++) { // Loop from index 1 to size-1
        if (arr[i] < minNumber) {
            minNumber = arr[i]; // Update min if a smaller number is found
        }
    }
    return minNumber;
}

int main() {
    int arr[] = {45, 56, 90, 80, 87, 54, 66, 11}; // Missing semicolon fixed
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int smallest = findsmallest(arr, size); // Call the function to find the smallest number
    cout << "The smallest number in the array is: " << smallest << endl; // Output the result
    return 0;
