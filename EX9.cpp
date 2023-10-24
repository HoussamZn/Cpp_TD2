#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;

class animal{
    protected:
    string name;
    int age;
    public :
    void set_value(string n,int a)
    {
        name = n;
        age = a;
    }
};

class zebra : public animal{
    string lieu;
    public : 
    zebra(string n,int a,string l)
    {
        set_value(n,a);
        lieu = l;
    }
    void aficher()
    {
        cout << "zebra nom : " << name <<" , age : " << age << " , et lieu d'origine : " << lieu << endl;
    }
};

class dolphin : public animal{
    string lieu;
    public : 
    dolphin(string n,int a,string l)
    {
        set_value(n,a);
        lieu = l;
    }
    void aficher()
    {
        cout << "Dolphin nom : " << name <<" , age : " << age << " , et lieu d'origine : " << lieu << endl;
    }
};

int main()
{
    string zebra_n,zebra_l;
    int zebra_a;

    cout << "Entre le nom de zebra : ";
    cin >> zebra_n;
    cout << "Entre l'age de zebra : ";
    cin >> zebra_a;
    cout << "Entre le lieu d'origine de zebra : ";
    cin >> zebra_l;

    zebra zeb(zebra_n,zebra_a,zebra_l);
    zeb.aficher();

    string dolphin_n,dolphin_l;
    int dolphin_a;

    cout << "Entre le nom de dolphin : ";
    cin >> dolphin_n;
    cout << "Entre l'age de dolphin : ";
    cin >> dolphin_a;
    cout << "Entre le lieu d'origine de dolphin : ";
    cin >> dolphin_l;

    dolphin dol(dolphin_n,dolphin_a,dolphin_l);
    dol.aficher();

    return 0;
}

