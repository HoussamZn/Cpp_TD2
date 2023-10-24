#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;


class test{
    public :
    static int count;
    static void call()
    {
        count++;
    }
};

int test::count = 0;

int main()
{
    test::call();
    test::call();
    test::call();
    test::call();
    test::call();
    test::call();
    test::call();
    cout << test::count;


    return 0;
}

