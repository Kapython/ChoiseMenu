#include <iostream>
#include "main.h"

using namespace std;

int main() {

    for(;;) {
        int choise = menu();
        switch (choise) {
            case 1:
                std::cout << "\t\tВаш выбор №1\n\n";
                break;
            case 2:
                std::cout << "\t\tВаш выбор №2\n\n";
                break;
            case 3:
                std::cout << "\t\tВаш выбор №3\n\n";
                break;
            case 4:
                stop = true;
                break;
            default:
                std::cout << "Попробуй еще\n\n";
                break;
        }
    if (stop)
        break;
    }

    return 0;
}