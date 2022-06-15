#include <iostream>

void calculator(char *userIn, double *a, double *b);
void printMenu();
double checkIfDouble(double *a);

int main(void)
{
    // double *op1 = 0, *op2 = 0;
    double *op1 = new (std::nothrow) double;
    double *op2 = new (std::nothrow) double;
    char *userInput = new (std::nothrow) char;

    calculator(userInput, op1, op2);
    delete (userInput);
    delete (op1);
    delete (op2);
}

void printMenu()
{
    std::cout << "Welcome to the simple calclulator" << std::endl;
    std::cout << "Options" << std::endl;
    std::cout << "[+] for Addition" << std::endl;
    std::cout << "[-] for Subtraction" << std::endl;
    std::cout << "[*] for Multiplication" << std::endl;
    std::cout << "[/] for Division" << std::endl;
    std::cout << "[0] to end execution" << std::endl;
    std::cout << "Enter the option above without the brackets followed by the return key: ";
}
double checkIfDouble(double *a)
{
    while (1)
    {
        std::cout << "Input a valid double: ";
        if (std::cin >> *a)
        {
            return *a;
        }
        else
        {
            std::cout << "Invalid Input try again" << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n')
            {
            }
        }
    }
}

void calculator(char *userIn, double *a, double *b)
{
    while (*userIn != '0')
    {
        printMenu();
        std::cin >> *userIn;

        switch (*userIn)
        {
        case '+':
            *a = checkIfDouble(a);
            *b = checkIfDouble(b);
            std::cout << *a << " + " << *b << " = " << (*a + *b) << std::endl;
            break;
        case '-':
            *a = checkIfDouble(a);
            *b = checkIfDouble(b);
            std::cout << *a << " - " << *b << " = " << (*a - *b) << std::endl;
            break;
        case '*':
            *a = checkIfDouble(a);
            *b = checkIfDouble(b);
            std::cout << *a << " * " << *b << " = " << (*a * *b) << std::endl;
            break;
        case '/':
            *a = checkIfDouble(a);
            *b = checkIfDouble(b);
            std::cout << *a << " / " << *b << " = ";
            if (*b == 0)
            {
                std::cout << "Undefined" << std::endl;
            }
            else
            {
                std::cout << (*a * *b) << std::endl;
            }
            break;
        case '0':
            std::cout << "Thank you." << std::endl;
            break;
        default:
            std::cout << "invalid entry" << std::endl;
            break;
        }
    }
}
