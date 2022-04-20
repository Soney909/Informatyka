#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void fibonacci(int n)
{
    int c = 0;
    long long f0 = 0, f1 = 1;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++)
    {
        c++;
        cout << f1 << " ";
        f1 += f0; 
        f0 = f1 - f0; 
        
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Code counter: ";
    cout << c << endl;
    cout << "Time taken by function: "
        << duration.count() << " microseconds" << endl;
}
int main()
{
    int n;
    cout << "Podaj n wyrazów ciągu: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
