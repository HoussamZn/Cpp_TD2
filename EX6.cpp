#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;
int inc=0,sw1=5,sw2=10;

int incrementer(int &inc)
{
    return ++inc;
}

void permuter(int &a,int &b)
{
    int c=a;
    a = b;
    b = c;

}

int main()
{
    cout << "inc = " << incrementer(inc) << endl;
    cout << "inc = " << incrementer(inc) << endl;
    cout << "inc = " << incrementer(inc) << endl;

    permuter(sw1,sw2);
    cout << "a = " << sw1 << endl;
    cout << "b = " << sw2;
    return 0;
}

