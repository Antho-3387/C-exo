#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


int main() {
    int nsticks = 21;
    int removesticks;
    int total;

    std::cout << "Actuellement il y a " << nsticks << " batons " << std::endl;

    srand(time(NULL));


    do {

        std::cout << "Tu peux enlever 1-3 batons" << std::endl;
        std::cin >> removesticks;
        if (removesticks > 3 || removesticks <= 0) {
            std::cout << "Erreur syntaxte " << std::endl;
            return 0;
        }
        else {
            total = nsticks - removesticks;
            nsticks = total;
            std::cout << "Actuellement il y a " << total << " batons" << std::endl;
        }
        if (total == 1) {
            std::cout << "Tu as gagne :) " << std::endl;
            break;
        }

        //IA
        if (nsticks % 4 == 1) {
            total = nsticks - 1;
            nsticks = total;
            std::cout << "L'IA a enleve " << 1 << " batons" << std::endl;
            std::cout << "Actuellement il y a " << total << " batons" << std::endl;
        }
        else if (nsticks % 4 == 2) {
            total = nsticks - 2;
            nsticks = total;
            std::cout << "L'IA a enleve " << 2 << " batons" << std::endl;
            std::cout << "Actuellement il y a " << total << " batons" << std::endl;
        }
        else if (nsticks % 4 == 3) {
            total = nsticks - 3;
            nsticks = total;
            std::cout << "L'IA a enleve " << 3 << " batons" << std::endl;
            std::cout << "Actuellement il y a " << total << " batons" << std::endl;

        }
        else {
            int r = rand() % 3 + 1;
            total = nsticks - r;
            nsticks = total;
            std::cout << "L'IA a enleve " << r << " batons" << std::endl;
            std::cout << "Actuellement il y a " << total << " batons" << std::endl;
        }
        if (total == 1) {
            std::cout << "Tu as perdu :( " << std::endl;
            break;
        }

    } while (total != 1);

    return 0;

}