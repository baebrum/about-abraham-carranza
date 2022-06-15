#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void myProgram();
void menu();
string options(string input);
void triangle(int declaredLength);
void square(int declaredLength);
void rectangle(int declaredLength);

int main(void)
{
    myProgram();
    return 0;
}

void myProgram()
{
    string userInput;
    do
    {
        menu();
        cin >> userInput;
        userInput = options(userInput);

    } while (userInput != "4");
}

void menu()
{
    for (int i = 0; i < 15; i++)
    {
        if (i != 7)
            cout << "*";
        else
            cout << " OPTIONS ";
    }
    cout << endl;
    cout << "[1] square" << endl;
    cout << "[2] triangle" << endl;
    cout << "[3] rectangle" << endl;
    cout << "[4] exit" << endl;
    cout << "Enter a number without the brackets to execute: ";
}
string options(string input)
{
    unsigned int shapeLength;
    do
    {
        cout << "Enter an integer greater than 3: ";
        while (1)
        {
            if (cin >> shapeLength)
            {
                break;
            }
            else
            {
                cout << "Invalid integer" << endl;
                cin.clear();
                while (cin.get() != '\n')
                {
                }
            }
        }
    } while (shapeLength < 4);

    if (input.size() > 0)
    {
        switch (input[0])
        {
        case '1':
            square(shapeLength);
            return "1";
        case '2':
            triangle(shapeLength);
            return "2";
        case '3':
            rectangle(shapeLength);
            return "3";
        case '4':
            return "4";
        default:
            break;
        }
    }
    cout << "Invalid input" << endl;
    return "-1";
}

void square(int declaredLength)
{
}
void triangle(int declaredLength)
{
}
void rectangle(int declaredLength)
{
}