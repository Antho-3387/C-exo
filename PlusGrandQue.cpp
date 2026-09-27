#include <iostream>
#include <string>


int main() {

    int number1 = 0;
    int number2 = 0;
    std::string replay;

    do {
        std::cout << "Entre un nombre : " << std::endl;
        std::cin >> number1;

        std::cout << "Entre un deuxieme nombre : " << std::endl;
        std::cin >> number2;

        if (number1 > number2) {
            std::cout << number1 << " > " << number2 << std::endl;
        } else {
            std::cout << number1 << " < " << number2 << std::endl;
        }
        std::cout << "Tu veux rejouer ? oui/non" << std::endl;
        std::cin >> replay;

    } while (replay == "oui");
    std::cout << "Tu as fini" << std::endl;

    return 0;
}