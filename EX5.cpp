#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;

int main()
{
    int a;
    int &ref_a = a;
    int *p_a = &a;

    cout << "les variables :" << endl;
    cout << "a : " << a << endl;
    cout << "ref_a : " << ref_a << endl;
    cout << "p_a : " << p_a << endl;

    cout << "les adresses :" << endl;
    cout << "a : " << &a << endl;
    cout << "ref_a : " << &ref_a << endl;
    cout << "p_a : " << &p_a << endl;

    cout << "les valeurs pointées :" << endl;
    cout << "a : " << a << endl;
    cout << "ref_a : " << ref_a << endl;
    cout << "p_a : " << *p_a << endl;





    return(0);

}

