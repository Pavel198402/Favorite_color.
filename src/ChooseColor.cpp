#include <iostream>
#include "Prints.h"
#include "ChooseCol.h"

//void ChooseFun(int favoriteCOL)
void FavoriteColors::ChooseFun()
{

	if (favoriteCOL & (1 << 0))
		std::cout << "Red\n";
	if (favoriteCOL & (1 << 1))
		std::cout << "Blue\n";
	if (favoriteCOL & (1 << 2))
		std::cout << "Green\n";
	if (favoriteCOL & (1 << 3))
		std::cout << "Yellow\n";
	if (favoriteCOL & (1 << 4))
		std::cout << " purple\n";
	if (favoriteCOL & (1 << 5))
		std::cout << " light blue\n";
	if (favoriteCOL & (1 << 6))
		std::cout << " white\n";
	if (favoriteCOL & (1 << 7))
		std::cout << " black\n";
	if (favoriteCOL & (1 << 8))
		std::cout << " orange\n";
	if (favoriteCOL & (1 << 9))
		std::cout << " beige\n";
	if (favoriteCOL & (1 << 10))
		std::cout << " pink\n";
	if (favoriteCOL & (1 << 11))
		std::cout << " light green\n";
	if (favoriteCOL & (1 << 12))
		std::cout << " gray\n";
}
//void AddFavoriteColor(int& favoriteCOL)
void FavoriteColors::AddFavoriteColor()
{
	int Colorinput;
	while (true)
	{
		PrintChoose();
		std::cin >> Colorinput;
		favoriteCOL |= (1 << Colorinput);
		if (Colorinput == 13)
			break;
	}
}
//void ShowFun(int& favoriteCOL)
void FavoriteColors::ShowFun()
{
	std::cout << "Bit mask: ";
	for (int i = 12; i >= 0; i--)
		std::cout << ((favoriteCOL >> i) & 1);
	std::cout << "\nYour favorite colors:\n";
	ChooseFun();
}
//void DeleteFun(int& favoriteCOL)
void FavoriteColors::DeleteFun()
{
	PrintRemove();
	int input1 = 0;
	std::cin >> input1;
	if (input1 == 15)
		return;
	if (input1 == 14)
	{
		favoriteCOL = 0;
		std::cout << "All favorite colors removed.\n";

	}
}