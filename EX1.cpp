#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int n=0;

 void count()
 {
   cout << "appel numéro " << ++n << endl;
 }



int main()
{
    count();
    count();
    count();
    count();



    return 0;
}

