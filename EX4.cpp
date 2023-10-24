#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;

int main()
{
    int size=5;

    int *n = (int*) malloc(size * sizeof(int));
    if(!n)
    {
        cout << "Error !";
        exit(1);
    }

    for (int i=0;i<size;i++)
    {
        cout << "Entrer le nombre " << i+1 << " :" ;
        cin >> *(n+i);
    }

    int *sqr = (int*) malloc(size * sizeof(int));
    if(!sqr)
    {
        cout << "Error !";
        exit(1);
    }

    for (int i=0;i<size;i++)
    {
        *(sqr+i) = *(n+i) * *(n+i);
    }

    free(n);

    for (int i=0;i<size;i++)
    {
        cout << "le carée du nombre " << i+1 << " : " << *(sqr+i) << endl;
    }

    free(sqr);
    
    return 0;
}

