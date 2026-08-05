#include <iostream>
#include <cmath>    // For pow()
using namespace std;

int main()
{
    int choice;
    double num1, num2;

    do
    {
        // Printing the menu
        cout << "\n===== Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exponential\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        // Take input for arithmetic operations
        if (choice >= 1 && choice <= 5)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        // Perform calculations
        switch (choice)
        {
            case 1:
                cout << "The sum is " << num1 + num2 << endl;
                break;

            case 2:
                cout << "The difference is " << num1 - num2 << endl;
                break;

            case 3:
                cout << "The product is " << num1 * num2 << endl;
                break;

            case 4:
                if (num2 != 0)
                    cout << "The quotient is " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;

            case 5:
                cout << "The result is " << pow(num1, num2) << endl;
                break;

            case 6:
                cout << "BYEEE!!!" << endl;
                break;

            default:
                cout << "Please enter a valid choice." << endl;
        }

    } while (choice != 6);

    return 0;
}
