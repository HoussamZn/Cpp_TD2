#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;

class personne{
    protected :
    string nom;
    string prenom;
    string naissance;
    public :
    personne(string n,string p,string naiss)
    {
        nom = n;
        prenom = p;
        naissance = naiss;
    }
    personne()
    {
        nom="NOT FOUND";
        prenom="NOT FOUND";
        naissance="NOT FOUND";
    }
    void afficher()
    {
        cout << "Le nom de cette personne est : " << nom << " " << prenom << " , date de naissance est :" << naissance;
    }
};

class employe : public personne{
    protected :
    double sal;
    public:
    employe(string n,string p,string naiss,double s)
    {
        nom = n;
        prenom = p;
        naissance = naiss;
        sal = s;
    }
    employe()
    {
        nom="NOT FOUND";
        prenom="NOT FOUND";
        naissance="NOT FOUND";
        sal = 0;
    }
    void afficher()
    {
        personne::afficher();
        cout <<" , son salaire est : " << sal;

    }
    
};

class chef : public employe{
    protected :
    string service;
    public:
    chef(string n,string p,string naiss,double s,string ser)
    {
        nom = n;
        prenom = p;
        naissance = naiss;
        sal = s;
        service = ser;
    }
    chef()
    {
        nom="NOT FOUND";
        prenom="NOT FOUND";
        naissance="NOT FOUND";
        sal = 0;   
        service = "NOT FOUND";
    }
    void afficher()
    {
        employe::afficher();
        cout << " , son service est : " << service;

    }
    
};

class directeur : public chef{
    string societe;
    public:
    directeur(string n,string p,string naiss,double s,string ser,string soc)
    {
        nom = n;
        prenom = p;
        naissance = naiss;
        sal = s;
        service = ser;
        societe = soc;
    }
    directeur()
    {
        nom="NOT FOUND";
        prenom="NOT FOUND";
        naissance="NOT FOUND";
        sal = 0;   
        service = "NOT FOUND";       
        societe = "NOT FOUND";
    }
    void afficher()
    {
        chef::afficher();
       cout <<  " , dans la société :" << societe;
    }
    
};

int main()
{
    directeur aa;
    aa.afficher();
    return 0;
}

