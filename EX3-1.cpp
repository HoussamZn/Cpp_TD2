#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int n[10],max,min;

    cout << "Entrer le nombre 1 :";
    cin >> n[0];
    max = n[0];
    min = n[0];
    for (int i=1;i<10;i++)
    {
        cout << "Entrer le nombre " << i+1 << " :" ;
        cin >> n[i];
        max = n[i] > max ? n[i]:max;
        min = n[i] < min ? n[i]:min;
    }

    cout << "Le max est :" << max << endl;
    cout << "Le min est :" << min << endl;



    return 0;
}

