# sorting_algorithms

This repository contains solutions to various sorting algorithm tasks implemented in different programming languages.

## Task 0: Bubble Sort

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

## Task 1: Insertion Sort for Doubly Linked List

### Objective:
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm. The function should print the list after each swap operation.

### File Details:
- Task File: `1-insertion_sort_list.c`
- Big O Notations (Time Complexity) in `1-O`:
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)

### Solution Code (`1-insertion_sort_list.c`):
The `insertion_sort_list` function takes a doubly linked list (`listint_t **list`) as input and sorts it in ascending order using the Insertion sort algorithm.

Here's how the code works:
1. It defines a helper function `swap` to swap two nodes in the doubly linked list.
2. It checks if the input list is valid and not empty.
3. It initializes a current node `curr` to the second node in the list.
4. It iterates through the list with a while loop, starting from the second node (`curr`).
5. Within the loop, it initializes a temporary node `temp` to the current node `curr`.
6. It then iterates backwards through the list with another while loop, starting from `temp` and moving towards the head of the list.
7. In each iteration of the inner loop, it checks if the previous node of `temp` has a value greater than the value of `temp`.
8. If the condition is true, it calls the `swap` function to swap the nodes, ensuring that the list remains sorted.
9. After each swap, it prints the updated list using the `print_list` function (assuming it's defined elsewhere).
10. If no swap is made in an iteration of the inner loop, it moves `temp` to its previous node to continue the comparison.
11. The outer loop continues until the end of the list is reached.

## Task 2: Selection Sort

### Objective:
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm. The function should print the array after each time you swap two elements.

### File Details:
- Task File: `2-selection_sort.c`
- Big O Notations (Time Complexity) in `2-O`:
  - Best Case: O(n^2)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)

### Solution Code (`2-selection_sort.c`):
The `selection_sort` function takes an array of integers (`int *array`) and its size (`size_t size`) as input parameters. It sorts the array in ascending order using the Selection sort algorithm.

Here's how the code works:
1. It checks if the input array is valid and not empty.
2. It uses two nested loops:
   - The outer loop iterates from the first element of the array (`ind1 = 0`) to the second-to-last element (`size - 1`).
   - The inner loop iterates from the element after the current outer loop index (`ind2 = ind1 + 1`) to the last element (`size`).
3. Within the inner loop, it checks if the current element at index `ind1` is greater than the element at index `ind2`.
4. If a smaller element is found, it updates the `min` index to the index of the smaller element and sets `min_flag` to 1.
5. If `min_flag` is 1, it swaps the current element at index `ind1` with the minimum element found (`array[min]`) and prints the array.
6. The outer loop continues until all elements are sorted.

## Task 3: Quick Sort

### Objective:
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm. You must implement the Lomuto partition scheme, and the pivot should always be the last element of the partition being sorted. The function should print the array after each time you swap two elements.

### File Details:
- Task File: `3-quick_sort.c`
- Big O Notations (Time Complexity) in `3-O`:
  - Best Case: O(n log n)
  - Average Case: O(n log n)
  - Worst Case: O(n^2)

### Solution Code (`3-quick_sort.c`):
The `quick_sort` function takes an array of integers (`int *array`) and its size (`size_t size`) as input parameters. It sorts the array in ascending order using the Quick sort algorithm with the Lomuto partition scheme.

Here's how the code works:
1. It defines helper functions `swap_int`, `split`, and `sort_recursion`.
2. `swap_int` swaps two integer values in the array and prints the array after each swap.
3. `split` divides the array into two parts using the pivot element (the last element of the partition being sorted) and returns the pivot index.
4. `sort_recursion` sorts the array recursively using the Quick sort algorithm.
5. The `quick_sort` function checks if the input array is valid and not empty, then calls `sort_recursion` to sort the array.

## How to Run the Code:
- Compile the C file using a C compiler (e.g., gcc).
- Execute the compiled program, providing inputs as required.
