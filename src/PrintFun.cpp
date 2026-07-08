#include <iostream>
#include "Prints.h"

void printMainMenu()
{
    std::cout << "\n===== MENU =====\n";
    std::cout << "1 - Add favorite colour\n";
    std::cout << "2 - Remove favorite\n";
    std::cout << "3 - Show favorites\n";
    std::cout << "4 - Exit\n";
}
void PrintChoose()
{
    std::cout << "\nChoose your favorite color:\n";
    std::cout << "0 -    You like Red\n";
    std::cout << "1 -    You like Blue\n";
    std::cout << "2 -    You like green\n";
    std::cout << "3 -    You like Yellow\n";
    std::cout << "4 -    You like purple\n";
    std::cout << "5 -    You like light blue\n";
    std::cout << "6 -    You like white\n";
    std::cout << "7 -    You like black\n";
    std::cout << "8 -    You like orange\n";
    std::cout << "9 -    You like beige\n";
    std::cout << "10 -   You like pink \n";
    std::cout << "11 -   You like light green\n";
    std::cout << "12 -   You like gray\n";
    std::cout << "13 -   Back\n";
}
void PrintRemove()
{
std::cout << "2 - Remove favorite\n";
std::cout << "15 - Back\n";
std::cout << "14 - All favorite colors removed\n";
}