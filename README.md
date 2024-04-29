# sorting_algorithms

This repository contains solutions to various sorting algorithm tasks implemented in different programming languages.

## Task 1: Bubble Sort

### Objective:
Implement a function that sorts an array of integers in ascending order using the Bubble sort algorithm. The function should print the array after each swap operation.

### File Details:
- Task File: `0-bubble_sort.c`
- Big O Notations (Time Complexity) in `0-O`:
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)

### Solution Code (`0-bubble_sort.c`)
The `bubble_sort` function takes an array of integers (`array`) and its size (`size`) as input parameters. It sorts the array in ascending order using the Bubble sort algorithm.

Here's how the code works:
1. It starts with a variable `hind` initialized to `size - 1`, which represents the index of the last element in the array.
2. It enters a while loop that continues until `hind` is greater than 0.
3. Inside the while loop, it initializes a `flag` variable to 0, indicating whether any swaps were made during the current pass through the array.
4. It iterates through the array using a for loop with index `i`.
5. In each iteration of the for loop, it compares adjacent elements `array[i]` and `array[i+1]`.
6. If `array[i]` is greater than `array[i+1]`, it swaps these elements to ensure that smaller elements "bubble" to the beginning of the array and sets `flag` to 1.
7. After each pass through the array, if no swaps were made (`flag` remains 0), it breaks out of the loop early since the array is already sorted.
8. The loop continues until all elements are sorted or no swaps are made in a pass, decrementing `hind` in each iteration to reduce the range of elements to be compared.

## How to Run the Code:
- Compile the C file using a C compiler (e.g., gcc).
- Execute the compiled program, providing inputs as required.
