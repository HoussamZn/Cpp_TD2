#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "point.h"


using namespace std;




int main()
{
    point p(10,5);
    cout << "Le point p : ";
    p.affiche();
    p.deplace(5,10);
    cout << endl << "Le point p aprés translation : ";
    p.affiche();

    return 0;
}

