#include <iostream>
#include <string>

int main() {
    int valeur1 = 0;
    int valeur2 = 0;
    int result;


    std::string operateur;
    std::string replay;

    do {
        std::cout << "Entre la 1ere valeur" << std::endl;
        std::cin >> valeur1;
        std::cout << "Entre l'operateur" << std::endl;
        std::cin >> operateur;
        std::cout << "Entre la 2eme valeur" << std::endl;
        std::cin >> valeur2;

        if (operateur == "+") {
            result = valeur1 + valeur2;
            std::cout << result << std::endl;
        }
        else if (operateur == "-") {
            result = valeur1 - valeur2;
            std::cout << result << std::endl;
        }
        else if (operateur == "*") {
            result = valeur1 * valeur2;
            std::cout << result << std::endl;
        }
        else if (operateur == "/") {
            result = valeur1 / valeur2;
            std::cout << result << std::endl;
        }
        else {
            std::cout << "Erreur avec l'operateur " << std::endl;
        }
        std::cout << "Tu veux continuer ?" << std::endl;
        std::cin >> replay;


    } while (replay != "non");

    return 0;

}