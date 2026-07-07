// favorite_color1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int choice = 0;                                                 // допоміжна зміна переключення підменю
    int favoriteCOL = 0;                                            // зміна зберігання улюбленого кольору

	const char* colors[13] =                                        // Масив з назвами кольорів для виводу на екран
    {
        "Red", "Blue", "Green", "Yellow", "Purple",
        "Light blue", "White", "Black", "Orange",
        "Beige", "Pink", "Light green", "Gray"
    };

	while (choice != 4)                                             // головне меню, вихід з якого можливий лише при виборі 4
    {
        std::cout << "\n===== MENU =====\n";
        std::cout << "1 - Add favorite colour\n";
        std::cout << "2 - Remove favorite\n";
        std::cout << "3 - Show favorites\n";
        std::cout << "4 - Exit\n";

		std::cin >> choice;                                         // вибір пункту меню

        switch (choice)
        {
        case 1:   //if (choice == 1)                                            // підменю додавання улюбленого кольору
            int Colorinput;

            while (true)
            {
                std::cout << "\nChoose your favorite color:\n";

                for (int i = 0; i < 13; i++)                        // вивід кольорів з їхніми індексами для вибору
                    std::cout << i << " - " << colors[i] << '\n';   // вивід пункту для повернення назад у головне меню

                std::cout << "13 - Back\n";
                std::cin >> Colorinput;

                if (Colorinput == 13)
                    break;

                if (Colorinput >= 0 && Colorinput <= 12)            // додавання кольору до улюблених за допомогою побітової операції OR
                    favoriteCOL |= (1 << Colorinput);               // перевірка на правильність введення індексу кольору
                else
                    std::cout << "Wrong number!\n";                 // повідомлення про неправильний вибір індексу кольору
            }
            break;
        case 2: // if (choice == 2)                                            // підменю видалення улюбленого кольору
            
                int input1;

                std::cout << "\nRemove favorite:\n";

                for (int i = 0; i < 13; i++)                            // вивід кольорів з їхніми індексами для вибору
                    std::cout << i << " - " << colors[i] << '\n';       // вивід пункту для видалення всіх кольорів з улюблених та повернення назад у головне меню

                std::cout << "14 - Remove all\n";                       //
                std::cout << "15 - Back\n";

                std::cin >> input1;

                if (input1 >= 0 && input1 <= 12)                        // видалення кольору з улюблених за допомогою побітової операції AND та NOT
                    favoriteCOL &= ~(1 << input1);                      // перевірка на правильність введення індексу кольору

                if (input1 == 14)
                    favoriteCOL = 0;
                break;
        case 3:      //   if (choice == 3)
            
                std::cout << "\nBit mask: ";

                for (int i = 12; i >= 0; i--)                           // вивід бітової маски улюблених кольорів
                    std::cout << ((favoriteCOL >> i) & 1);              // вивід улюблених кольорів за допомогою побітової операції AND та зсуву

                std::cout << "\nYour favorite colors:\n";

                for (int i = 0; i < 13; i++)                            // вивід улюблених кольорів за допомогою побітової операції AND та зсуву
                {
                    if (favoriteCOL & (1 << i))                         // перевірка, чи є колір улюбленим
                        std::cout << colors[i] << '\n';                 // вивід назви кольору, якщо він є улюбленим
                }
                break;
        default:
            if (choice != 4)                                             // перевірка на правильність вибору пункту меню
                std::cout << "Wrong number!\n";               
            break;
        }
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
