# SimpleArithmeticCalculator-

Description of the Code
The provided C++ code is a simple calculator program that performs basic arithmetic operations based on user input. Here's a step-by-step breakdown of the key points in the code:

1.Include Header and Namespace Declaration:
 #include<iostream>: Includes the standard input-output stream library.
 using namespace std;: Uses the standard namespace.

2.Main Function:
 int main() { ... }: The main function where the execution of the program begins.

3.Variable Declarations:
 char op;: Declares a variable to store the operator.
 double num1, num2;: Declares variables to store the two numbers for the operation.

4.User Input:
 cout << "Enter the number first :"; and cin >> num1;: Prompts the user to enter the first number and stores it in num1.
 cout << "Enter the operator (+, -, *, / ) :"; and cin >> op;: Prompts the user to enter an operator and stores it in op.
 cout << "Enter the number second :"; and cin >> num2;: Prompts the user to enter the second number and stores it in num2.

5.Switch Case for Operations:
 The switch statement evaluates the operator (op) and performs the corresponding arithmetic operation:
 Addition (+): cout << num1 << "+" << num2 << "=" << (num1 + num2);
 Subtraction (-): cout << num1 << "-" << num2 << "=" << (num1 - num2);
 Multiplication (*): cout << num1 << "*" << num2 << "=" << (num1 * num2);
 Division (/): Checks if num2 is not zero before performing the division to avoid division by zero error. If num2 is zero, it prints an error message.
 Default Case: Handles invalid operators by printing an error message.

6.Return Statement:
 return 0;: Ends the main function and returns 0 to indicate successful execution.
 
 
