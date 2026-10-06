#include <iostream>
#include <string>
using namespace std;

/*
int tableau(int tab[], int lenght) {
	int petittableau = tab[0];
	for (int i; i < lenght; i++) {
		if (tab[i] < petittableau) {
			petittableau = tab[i];
		}
	}
	return petittableau;
}
*/

int main() {

	char alphabet[26];
	char valeur = 97;

	for (int i = 0; i < 26; i++) {
		alphabet[i] = valeur++;

		std::cout << alphabet << std::endl;
	}

	return 0;
}