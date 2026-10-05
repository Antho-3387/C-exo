#include <iostream>
#include <string>

int main() {
    int nsticks = 21;
    int removesticks;
    int total;

    std::cout << "Actuellement il y a " << nsticks << " batons " << std::endl;

    do {
        std::cout << "Tu peux enlever 1-3 batons" << std::endl;
        std::cin >> removesticks;
        if (removesticks > 3) {
            std::cout << "Tu peux pas mettre un chiffre < 3 " << std::endl;
            return 0;
        }
        else {
            total = nsticks - removesticks;
            nsticks = total;
            std::cout << "Actuellement il y a " << total << " batons" << std::endl;
        }

    } while (total != 1);

    return 0;

}