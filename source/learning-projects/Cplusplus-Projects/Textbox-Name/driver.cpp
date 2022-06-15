#include <iostream>
#include <string>

void topAndBottomAstericks(int numAstericks)
{
    for (int i = 0; i < numAstericks; i++)
        std::cout << "*";
    std::cout << std::endl;
}
void filler(int totalSpacesAndPad, int pads)
{
    std::cout << "* ";
    for (int i = 0; i < totalSpacesAndPad - pads; i++)
        std::cout << " ";
    std::cout << " *" << std::endl;
}
void box(std::string inputName, int max_length, int padding)
{
    topAndBottomAstericks(max_length);
    filler(max_length, padding);
    std::cout << "* " + inputName + " *" << std::endl;
    filler(max_length, padding);
    topAndBottomAstericks(max_length);
}

int main(void)
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << std::endl;

    const int PAD = 4;
    const int MAX_LENGTH = name.size() + PAD;

    box(name, MAX_LENGTH, PAD);

    return 0;
}