#include <iostream>

bool stop = false;

int menu(){

    int choise;

    std::cout << " 1. Выбор № 1\n";
    std::cout << " 2. Выбор № 2\n";
    std::cout << " 3. Выбор № 3\n";
    std::cout << " 4. Выход\n\n";
    std::cout << "Сделай выбор: ";


    std::cin >> choise;
    std::cout << "\n";
    return choise;
}