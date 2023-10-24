#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;

int main()
{
    int *n = (int*) malloc(10 * sizeof(int));
    int max,min;

    if(!n)
    {
        cout << "Error !";
        exit(1);
    }

    cout << "Entrer le nombre 1 :";
    cin >> *n;
    max = *n;
    min = *n;
    for (int i=1;i<10;i++)
    {
        cout << "Entrer le nombre " << i+1 << " :" ;
        cin >> *(n+i);
        max = *(n+i) > max ? *(n+i):max;
        min = *(n+i) < min ? *(n+i):min;
    }

    cout << "Le max est :" << max << endl;
    cout << "Le min est :" << min << endl;



    return 0;
}

