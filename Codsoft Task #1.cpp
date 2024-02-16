#include <iostream>
using namespace std;
int main() {
    char operation;
    float num1, num2;

    cout << "Welcome to the Basic Calculator Program!\n"<<endl;
    
    cout << "Enter first number: ";          // Input two numbers
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose an operation to perform (+, -, *, /): ";    // Choose operation
    cin >> operation;

    switch(operation) {                                           // Perform operation and display result
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed."<<endl;
            break;
        default:
            cout << "Invalid operation! Please choose from +, -, *, or /."<<endl;
    }

    return 0;
}

