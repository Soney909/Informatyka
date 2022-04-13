#include <iostream>
#include <cstring>

using namespace std;

void szyfrCezara(char tab[], int key) {
	int dl = strlen(tab);

	if (!(key >= -26 && key <= 26)) {
		return;
	}

	if (key >= 0) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + key <= 'z') {
				tab[i] += key;
			}
			else {
				tab[i] = tab[i] + key - 26;
			}
		}
	}
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + key >= 'a') {
				tab[i] += key;
			}
			else {
				tab[i] = tab[i] + key + 26;
			}
		}
	}

}
int main()
{
	int klucz;
	char tablica[200];

	cout << "Podaj wyraz składający się z małych liter: ";
	cin >> tablica;

	cout << "Podaj klucz z przedziału [-26..26]: ";
	cin >> klucz;

	szyfrCezara(tablica, klucz);
	cout << "Po zaszyfrowaniu: " << tablica << endl;
	szyfrCezara(tablica, -klucz);
	cout << "Po odszyfrowaniu: " << tablica;
}