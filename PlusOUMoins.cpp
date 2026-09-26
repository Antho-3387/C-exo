#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    int usernomber;
    int i = 0;

    srand(time(NULL));
    int r = rand() % 10;
    std::cout << "Devine le nombre aleatoire !" << std::endl;

    do {
        std::cin >> usernomber;
        if (usernomber < r) {
            std::cout << "Plus haut ! " << std::endl;
        } else if (usernomber > r ) {
            std::cout << "Plus bas ! " << std::endl;
        }
        i++;
    } while (usernomber != r);

    std::cout << "C'est le bon nombre ! ";
    std::cout << "Tu as fais " << i << " tours " << std::endl;

    return 0;
}
