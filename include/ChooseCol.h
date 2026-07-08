#pragma once
#include <iostream>
//void ChooseFun(int favoriteCOL);
//void AddFavoriteColor(int& favoriteCOL);
//void ShowFun(int& favoriteCOL);
//void DeleteFun(int& favoriteCOL);
class FavoriteColors
{
private:
    int favoriteCOL = 0;

public:

    void ChooseFun();
    void AddFavoriteColor();
    void ShowFun();
    void DeleteFun();
};