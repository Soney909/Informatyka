#include <iostream>

using namespace std;

int main()
{
    bool flag;
    int lp = 0;
    int p = 2;
    int n;
    cout << "enter numbers: " << endl;
    cin >> n;

    while (lp < n) {
        flag = true;
        for (int d = 2; d <= p - 1; d++) {
            if (p % d == 0) {
                flag = false;
            }
        }
        if (flag == true) {
            cout << p << endl;
            lp++;
        }
        p++;
    }

    return 0;
}