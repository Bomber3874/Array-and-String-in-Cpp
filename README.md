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


# Introduction to Strings

A string is a sequence of characters used to represent textual data. In C++, strings can be managed in two main ways:

    C-style strings: Character arrays terminated with a null character ('\0')

    C++ string class: Part of the Standard Template Library (STL), offering dynamic sizing and built-in functions for easier manipulation

The string class is more versatile and commonly used in modern C++ programming.

# Key Properties of Strings

    Variable Length: Unlike arrays, strings can change size during runtime.

    Zero-Based Indexing: The first character is at index 0.

    Character-Based: Strings consist of characters (char type).

    Null-Termination (C-style): C-style strings end with a special null character to indicate the end of the string.

# String Operations

(a) Input and Output

    Input: Strings can be read from the user using standard input methods.

    Output: Strings are displayed using standard output functions.

(b) Searching in a String

    Character Search: Each character is checked sequentially to find a match.

    Substring Search: A portion of the string is searched within the larger string.

(c) Counting Occurrences

    Traverse the string and count how many times a specific character or substring appears.

(d) Reversing a String

Two common methods:

    Using a Loop: Access characters from the end to the beginning.

    Swapping Characters: Swap characters from both ends moving toward the center.

(e) Length and Concatenation

    Length: The total number of characters in the string.

    Concatenation: Joining two or more strings together to form a new string.

(f) Finding Minimum and Maximum Characters

    Traverse the string and compare characters based on their ASCII values to find the smallest or largest character.

# Applications of Strings

Strings are widely used in:

    Text Processing: Editing, formatting, and analyzing textual data

    User Input Handling: Capturing names, addresses, and commands

    Data Validation: Checking formats like email addresses or passwords

    Search Engines: Matching queries and indexing content

    Programming Tools: Parsing and interpreting source code

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
