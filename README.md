# Array-and-String-in-Cpp

# Aim

To understand and implement Array and String Operations in C++.

# Software Used

    Compiler: GNU GCC (g++)

    IDE: Code: Visual Studio Code

    Operating System: Windows/Linux

# Theory

1. Introduction to Arrays

An array is a linear data structure that stores elements of the same data type in contiguous memory locations. It allows efficient access to elements using an index. Arrays are static in C++, meaning their size must be defined at compile time.

Key Properties of Arrays:

    Fixed Size: The size of an array cannot be changed after declaration.

    Zero-Based Indexing: The first element is at index 0, the second at 1, and so on.

    Homogeneous Elements: All elements must be of the same data type (e.g., int, float, char).

2. Array Operations

(a) Input and Output

    Input: Elements can be read into an array using a loop (e.g., for or while).

    Output: Elements can be displayed using another loop.

(b) Searching in an Array

    Linear Search: The simplest search algorithm where each element is checked sequentially until a match is found.

    Binary Search: A more efficient search method for sorted arrays (not covered in this experiment).

(c) Counting Occurrences

    Traverse the array and increment a counter each time the desired element is found.

(d) Reversing an Array

    Two common approaches:

        Using a Loop: Print the array from the last index to the first.

        Swapping Elements: Swap the first element with the last, the second with the second-last, and so on.

(e) Sum and Average Calculation

    Sum: Accumulate all elements in a variable by iterating through the array.

    Average: Divide the sum by the number of elements.

(f) Finding Minimum and Maximum

    Maximum: Initialize a variable with the first element, then compare it with each subsequent element and update if a larger value is found.

    Minimum: Similar to finding the maximum, but update when a smaller value is found.

3. Applications of Arrays

Arrays are widely used in:

    Data Storage: Storing lists of numbers, strings, or objects.

    Sorting Algorithms: Bubble Sort, Selection Sort, etc.

    Mathematical Computations: Matrix operations, statistical calculations.

    Searching Problems: Implementing lookup tables, frequency counting.

# Algorithms

1. Algorithm for search_and_count.cpp

Objective: Search for a key in an array and count its occurrences.

Steps:

    Initialize an array with given elements.

    Take input from the user for the key to be searched.

    Initialize a counter variable s to zero.

    Traverse the array using a loop:

        If the current element matches the key:

            Print its location (index + 1).

            Increment the counter s.

    After traversal:

        If s > 1, print the total occurrences.

        If s == 1, print that the key was found once.

        If s == 0, print that the key was not found.

2. Algorithm for Reversing_array.cpp

Objective: Reverse the elements of an array and print them.

Steps:

    Initialize an array with given elements.

    Print "Reversed array:" as a header.

    Traverse the array from the last index to the first using a loop:

        Print each element with a tab space.

    End the loop when all elements are printed in reverse order.

# Conclusion

This experiment successfully demonstrated essential array operations in C++. The key observations are:

    Arrays provide a structured way to store and manipulate data.

    Linear search is simple but inefficient for large datasets (binary search is better for sorted arrays).

    Reversing an array is useful in algorithms like palindrome checks and matrix transformations.

    Calculating sum, average, min, and max are fundamental for statistical and mathematical computations.

The programs executed correctly, producing the expected outputs. Understanding these operations is crucial for solving real-world programming problems efficiently.
