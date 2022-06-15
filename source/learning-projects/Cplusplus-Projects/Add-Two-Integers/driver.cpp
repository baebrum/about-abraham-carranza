#include <iostream>

using namespace std;

void program();
void menu();
void add();
void checkValidInt(int *value);

int main(void)
{
    cout << "Program Add Two Integers" << endl;
    program();
    return 0;
}

void program()
{
    char *userInput = new (nothrow) char;
    do
    {
        menu();
        cin >> userInput;
        switch (*userInput)
        {
        case '1':
            add();
            break;
        case '2':
            break;
        default:
            cout << "Invalid Entry. Try again" << endl;
            break;
        }
    } while (*userInput != '2');
    delete userInput;
    userInput = 0;
}

void menu()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "*";
        if (i == 5)
            cout << " MENU ";
    }
    cout << endl;
    cout << "[1] Add" << endl;
    cout << "[2] End program" << endl;
    cout << "Enter 1 or 2 to execute: ";
}
void add()
{
    int *num1 = new (nothrow) int;
    int *num2 = new (nothrow) int;
    cout << "Enter your first valid integer: ";
    checkValidInt(num1);
    cout << "Enter your second valid integer: ";
    checkValidInt(num2);
    cout << *num1 << " + " << *num2 << " = " << *num1 + *num2 << endl;
    // cout << *num1 << "hello moto" << endl;
    delete num1;
    delete num2;
    num1 = 0;
    num2 = 0;
}
void checkValidInt(int *value)
{
    while (1)
    {
        if (cin >> *value)
            break;
        else
        {
            // cout << endl;
            cout << "Invalid entry. Try Again. Enter a value: ";
            cin.clear();
            while (cin.get() != '\n')
                ;
        }
    }
}