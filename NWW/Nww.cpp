#include <iostream>
using namespace std;

int main()
{
    int numberOne;
    int numberTwo;
    cout << "Podaj pierwszą liczbę: " << endl;
    cin >> numberOne;
    cout << "Podaj drugą liczbę: " << endl;
    cin >> numberTwo;
    int mult = numberOne * numberTwo;
    int nww;
    while (numberOne != numberTwo) {
        if (numberOne < numberTwo) {
            numberTwo = numberTwo - numberOne;
        }
        else {
            numberOne = numberOne - numberTwo;
        }
    }
    nww = mult / numberOne;
    cout << nww << endl;
}
