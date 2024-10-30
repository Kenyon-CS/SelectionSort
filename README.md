# SelectionSort
C++

Selection Sort
1.1. What is Selection Sort?
Selection Sort is an in-place comparison-based sorting algorithm. It divides the input list into two parts:

Sorted Sublist: Initially empty and grows from left to right.
Unsorted Sublist: Initially contains all elements and shrinks as elements are moved to the sorted sublist.
1.2. How Selection Sort Works
Find the Minimum Element: Iterate through the unsorted sublist to find the smallest element.
Swap with First Unsorted Element: Swap the found minimum element with the first element of the unsorted sublist.
Move Boundary: Move the boundary of the sorted and unsorted sublists one element to the right.
Repeat: Continue the process for the remaining unsorted sublist until the entire list is sorted.
1.3. Time and Space Complexity
Time Complexity:
Best Case: O(n²)
Average Case: O(n²)
Worst Case: O(n²)
Space Complexity: O(1) (In-place sorting)
Note: Although Selection Sort has a higher time complexity compared to more efficient algorithms like Quick Sort or Merge Sort, it is simple to implement and performs well on small datasets.
