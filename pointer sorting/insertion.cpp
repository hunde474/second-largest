#include <iostream>
using namespace std;
void pointerInsertionSort(int* arr[], int n) {
    for (int i = 1; i < n; i++) {
        int* key = arr[i];       
        int j = i - 1;           
        while (j >= 0 && *arr[j] > *key) {  
            arr[j + 1] = arr[j]; 
            j--;                 
        }
        arr[j + 1] = key;        
    }
}
int main() {  
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    
    int* ptrArr[n];
    for (int i = 0; i < n; i++) {
        ptrArr[i] = &arr[i];  
    }
    pointerInsertionSort(ptrArr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << *ptrArr[i] << " ";  
    }
    return 0;
}