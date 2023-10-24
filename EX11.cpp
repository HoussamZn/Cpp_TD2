#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>



using namespace std;

class vecteur3d{
    float x,y,z;
    public :
    void set_value(float px,float py,float pz)
    {
        x=px;
        y=py;
        z=pz;
    }
    vecteur3d()
    {
        set_value(0,0,0);
    }
    vecteur3d(float px,float py,float pz)
    {
        set_value(px,py,pz);
    }

    void afficher()
    {
        cout <<"("<<x<<","<<y<<","<<z<<")";
    }

    static vecteur3d somme(vecteur3d a,vecteur3d b)
    {
        return vecteur3d(a.x + b.x , a.y + b.y , a.z + b.z);
    }
    
    static float produit(vecteur3d a,vecteur3d b)
    {
        return (a.x*b.x + a.y*b.y + a.z*b.z);
    }

    static bool coincide(vecteur3d a,vecteur3d b)
    {
        return (a.x == b.x && a.y == b.y && a.z == b.z)?true:false;
    }
    double norme()
    {
        return sqrt(x*x + y*y + z*z);
    }
    static vecteur3d normax(vecteur3d a,vecteur3d b)
    {
        return a.norme() < b.norme() ? b : a;
    }
};


int main()
{    
    /* vecteur3d a(1,2,3);
    vecteur3d b(12,12,12);
    vecteur3d c,d;

    vecteur3d ss=vecteur3d::somme(a,b);
    ss.afficher();

    if(vecteur3d::coincide(c,d)) cout << "coincide";
    else cout << "ne coincide pas";

    vecteur3d e(-1,2,2);
    cout << e.norme();

    vecteur3d max=vecteur3d::normax(a,b);
    max.afficher(); */





    return 0;
}

