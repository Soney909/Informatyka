#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    bool flag;
    int lp = 0;
    int p = 2;
    int c = 0;
    int n;
    cout<<"enter numbers: "<<endl;
    cin >> n;

    clock_t tStart = clock();
    
    while(lp < n){
        c++;
        flag = true;
        for(int d = 2; d <= p-1; d++){
            if(p % d == 0){
               flag = false;
            }
        }
        if(flag == true){
            cout<<p<<endl;
            lp++;
      
        }
        p++;
    }
    cout << "Liczba kroków: ";
    cout << c << endl;
    printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
    return 0;
}