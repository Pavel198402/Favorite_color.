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
    static FavoriteColors* instance;

    FavoriteColors()
    {
    }

public:
    FavoriteColors(const FavoriteColors&) = delete;
    FavoriteColors& operator=(const FavoriteColors&) = delete;

    static FavoriteColors* GetInstance();

    void ChooseFun();
    void AddFavoriteColor();
    void ShowFun();
    void DeleteFun();
};