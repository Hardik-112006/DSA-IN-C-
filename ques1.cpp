// Static Memory Allocation vs Dynamic Memory Allocation
// Static Memory Allocation	Dynamic Memory Allocation
// Memory is allocated at compile time.	Memory is allocated at runtime.
// Stack-oriented memory.	Heap-based memory.
// Size must be known before execution.	Size can be decided during execution.
// Allocation and deallocation happen automatically.	Programmer must manage memory manually.
// Faster memory allocation.	Slightly slower due to heap management.
// Less flexible.	More flexible.
// Heap Memory Creation using new
// new allocates memory on the heap.
// Memory remains allocated until it is explicitly released using delete.
// Single Variable
// int *ptr = new int;
// *ptr = 10;

// delete ptr;   // Frees the memory
// Dynamic Array Example (Runtime Size)
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     int *arr = new int[n];   // Heap memory allocation

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Array elements: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     delete[] arr;   // Frees the entire array memory
// }
// Use of delete
// Releases memory allocated using new.
// Prevents memory leaks.
// Makes heap memory available for reuse.
// Syntax
// delete ptr;      // For a single variable

// delete[] arr;    // For an array
// Remember
// new → Allocate memory on the heap.
// delete → Free a single heap object.
// new[] → Allocate a dynamic array.
// delete[] → Free the entire dynamic array.