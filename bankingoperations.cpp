#include <iostream>
#include <string>
using namespace std;

// Global variable
int currentbalance;

// Cash depositing function
void depositingCash()
{
    int depositamt;

    cout << "Enter the amount to be deposited: ";
    cin >> depositamt;

    if (depositamt <= 0)
    {
        cout << "Invalid amount!\n";
        return;
    }

    currentbalance += depositamt;
    cout << "New Balance: " << currentbalance << endl;
}

// Cash withdrawal function
void withdrawCash()
{
    int withdrawalamt;

    cout << "Enter the amount to be withdrawn: ";
    cin >> withdrawalamt;

    if (withdrawalamt <= 0)
    {
        cout << "Invalid amount!\n";
        return;
    }

    if (withdrawalamt > currentbalance)
    {
        cout << "Insufficient Balance!\n";
        return;
    }

    currentbalance -= withdrawalamt;
    cout << "New Balance: " << currentbalance << endl;
}

// Simple Interest Calculation
void simpleinterestcal()
{
    float principal, rate, time, si;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate (%): ";
    cin >> rate;

    cout << "Enter Time (years): ";
    cin >> time;

    si = (principal * rate * time) / 100;

    cout << "Simple Interest = " << si << endl;
}

int main()
{
    int choice;
    string name;
    unsigned int accnumber;

    // User Details
    cout << "Enter Your Name: ";
    getline(cin >> ws, name);

    cout << "Enter Your Account Number: ";
    cin >> accnumber;

    cout << "Enter Current Balance: ";
    cin >> currentbalance;

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Deposit Cash\n";
        cout << "2. Withdraw Cash\n";
        cout << "3. Check Balance\n";
        cout << "4. Calculate Simple Interest\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            depositingCash();
            break;

        case 2:
            withdrawCash();
            break;

        case 3:
            cout << "Current Balance: " << currentbalance << endl;
            break;

        case 4:
            simpleinterestcal();
            break;

        case 5:
            cout << "Thank you for using the program!\n";
            break;

        default:
            cout << "Invalid Choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
