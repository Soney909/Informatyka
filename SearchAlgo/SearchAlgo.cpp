#include <iostream>

using namespace std;

int main()
{
    int s;
    cout << "Podaj liczbe ktora chcesz znalezc: " << endl;
    cin >> s;
    int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    int l = 0;
    int p = 15;
    int sr = (l + p) / 2;

    while (l <= p) {
        if (tab[sr] == s) {
            cout << "Liczba 29 wystepuje w zbiorze w komorce o indeksie: ";
            cout << sr << endl;
        }
        if (tab[sr] > s) {
            p = sr - 1;
        }
        else {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }
    return 0;
}