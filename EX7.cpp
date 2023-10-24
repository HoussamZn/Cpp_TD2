#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;


int main()
{
    int counter=0,n[10];
    for (int i=0;i<10;i++)
    {
        cout << "Entrer le nombre " << i+1 << " :" ;
        cin >> n[i];
    }

    int pass;
    do
    {
        counter=0;
        for(int i=0;i<9;i++)
        {
            if (n[i] > n[i+1])
            {
                pass=n[i];
                n[i] = n[i+1];
                n[i+1]=pass;
                counter++;
                //cout << counter << endl;
            }
        }
    } while (counter != 0);

    for (int i=0;i<10;i++)
    {
        cout << "le nombre " << i+1 << " : " << n[i] << endl;
    }
    
    

    return 0;
}

