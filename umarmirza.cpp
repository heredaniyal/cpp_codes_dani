#include <iostream>
#include <stack>
#include <string>
#include <cctype> // For isdigit()
using namespace std;

// Function to perform arithmetic operations
int performOperation(int operand1, int operand2, char op) {
    switch (op) {
    case '+': return operand1 + operand2; // Addition
    case '-': return operand1 - operand2; // Subtraction
    case '*': return operand1 * operand2; // Multiplication
    case '/': return operand1 / operand2; // Division
    default:
        cout << "Invalid operator encountered.\n";
        return 0;
    }
}

// Function to evaluate a postfix expression
int evaluatePostfix(const string& postfix) {
    stack<int> st; // Stack to store intermediate results

    for (char c : postfix) {
        // Case 1: Operand (push onto stack)
        if (isdigit(c)) { // Check if the character is a digit
            st.push(c - '0'); // Convert char to integer and push onto stack
        }
        // Case 2: Operator (pop operands, perform operation, and push result)
        else {
            if (st.size() < 2) { // Ensure there are at least two operands
                cout << "Error: Insufficient operands for operation.\n";
                return -1;
            }
            int operand2 = st.top(); st.pop(); // Pop the top operand (right-hand side)
            int operand1 = st.top(); st.pop(); // Pop the next operand (left-hand side)
            int result = performOperation(operand1, operand2, c); // Perform the operation
            st.push(result); // Push the result back onto the stack
        }
    }

    // Final result should be the only value in the stack
    if (st.size() != 1) { // Ensure the stack contains only the result
        cout << "Error: Invalid postfix expression.\n";
        return -1;
    }
    return st.top(); // Return the final result
}

// Main function to demonstrate postfix evaluation
int main() {
    string postfix;

    cout << "Enter a postfix expression (e.g., 23*54*+9-): ";
    cin >> postfix;

    int result = evaluatePostfix(postfix); // Evaluate the postfix expression
    if (result != -1) { // Check for errors
        cout << "The result of the postfix evaluation is: " << result << endl;
    }

    return 0; // Exit the program
}