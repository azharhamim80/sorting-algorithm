#include <iostream>

using namespace std;

int main() {
  int arr[] = {5,4,3,2,1}; // Array
  int size = sizeof(arr) / sizeof(arr[0]); // Get size

  for (int i = 1; i < size; i++) { // Each element (from 2nd)
    int key = arr[i]; // Current element
    int j = i - 1; // Compare with previous

    while (j >= 0 && arr[j] > key) { // Shift right if greater
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key; // Insert at correct position
  }

  for (int i = 0; i < size; i++) { // Print sorted array
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
