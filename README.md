# rpncalculator
This program is a command-line application that performs integer calculations specified in Reverse Polish Notation (RPN). RPN is a mathematical notation in which operators are given after the arguments to which they apply. The program maintains a stack of stored values to perform the calculations.
**Features**
Accepts a string of RPN expression as input.
Supports the following arithmetic operators: + (addition), - (subtraction), * (multiplication), and / (division).
Handles integer operands and integer results.
Detects and handles error cases:
If the stack contains more than one value at the end of the computation, it displays an error message.
If the stack does not contain enough values to perform an operation, it displays an error message.
