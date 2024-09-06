# Programming Assignment Week 1

The program "Sales.cpp" runs with different options. I created it to be able to change the data on the array. Each row on the array is treated as the class ID.
There are 6 functions:

1. Add Sale:
    - Increments an N amount at a given location -1 to account for the index.
2. Print Sales:
    - Displays all the classes and their total sales.
    - It runs a for loop printing the current index + 1 and the amount of sales on that index.
3. Print Class:
    - Displays the sales of one individual class.
    - Given the location - 1 it prints a record in the same format as the full list.
4. Save Sales:
    - Saves all the data in a "sales.out" file.
    - Using the fstream library and the ofstream function.
    - A for loop parses the array and copies line by line each sale amount.
    - Any class with 0 sales appears as a 0 on the output file.
    - For the sake of simplicity with reading and saving I omitted any labels in the output file.
5. Load Sales:
    - Loads all the data from the "sales.out" file.
    - A while loop checks for the line and assigns it to a string "line" which is parsed into as an int into the array.
    - This requires the .out file to have at least 10 lines. Any less will mess with the program. It will just ignore lines past 10.
6. Print Results:
    - Prints which class sold the most boxes and how many.
    - It does a procedure similar to a quick sort to find the highest sales number and prints the index + 1 of that class.

I know the assignment didn't need this much work but I wanted to challenge myself as I've been recently going back through and learning new functions for C++ on GUI and embedded programs.
