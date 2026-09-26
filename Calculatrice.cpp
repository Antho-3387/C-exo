#include <iostream>
#include <string>

int main() {

    int table = 0;
    std::string ok;


    do {
        std::cout << "Choisie ta table de multiplication : " << std::endl;
        std::cin >> table;
            for (int i = 0; i<=10; i++ ) {
                std::cout << i << " x " << table << " = " << i*table <<std::endl;
            }
        std::cout << "Tu veux refaire une multiplication ? oui/non" <<std::endl;
        std::cin >> ok;

    } while (ok != "non");
    std::cout << "Tu as fini ! "<< std::endl;


    return 0;
}